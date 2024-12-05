#include "JRBinomialTree.h"
#include <iostream>

using std::cout;
using std::endl;

BinomialTree::BinomialTree(double S, double rate,
                           double vol, double time, unsigned long steps)
        : S0_(S),
          r_(rate),
          v_(vol),
          T_(time),
          M_(steps)
{
//    // Precalculations
//    dt_ = T_ / M_;
//    nu_ = r_ - 0.5*v_*v_;
//    disc_ = exp(-r_*dt_);
//    sqrt_dt_ = sqrt(dt_);

    buildTree();
}

void BinomialTree::buildTree()
{
    // Step 1
    //Create/initialize the Tree

    //we have N+1 time steps, i.e. N+1 vectors for each time step
    //"resize" the container to make room for (N+1) vectors
    //有M+1 layer
    tree_.resize(M_ + 1);

    //the "i"th vector should have (i+1) Nodes where i is the time index
    //each layer 有 i+1 个nodes
    for (long i = 0; i <= M_; i++)
    {
        tree_[i].resize(i + 1);
    }

    // Step 2
    //算每一层的Stock Price
    //we access the first and second elements in a pair using first and second fields
    tree_[0][0].S = S0_;

    double IncFactor_ = exp((r_ - v_ * v_ / 2) * T_ / M_ + v_ * sqrt(T_ / M_));
    double DecFactor_ = exp((r_ - v_ * v_ / 2) * T_ / M_ - v_ * sqrt(T_ / M_));
    //i: is horizontal time index
    //we go from left to right
    for (int i = 1; i <= M_; i++){
        for (int j = 0; j <= i; ++j) {
            tree_[i][j].S = S0_ * pow(IncFactor_, i-j) * pow(DecFactor_, j);
        }
        // Tree top [0] = up, Tree bottom [n] = down eg. S^UU = S0 * IncFactor^2
    }
}

double BinomialTree::Price(const Option &option)
{
    // Step 3
    //算在Expiration date: option payoffs
    //j is vertical index: goes from 0 to N because we have N+1 nodes
    for (int j = 0; j < M_ + 1; ++j)
    {
        tree_[M_][j].C = option.GetExpirationPayoff(tree_[M_][j].S);
    }

    // Step 4
    //算每个node的option price往前推
    //Back propagation
    //ir is index i in reverse direction (we go from right to left)
    for (int ir = M_ - 1; ir >= 0; --ir)
    {
        //inner loop to populate option payoffs at each time index
        for (int j = 0; j < ir + 1; ++j)   // there are ir + 1 nodes at ir_th layer
        {
            //use Equation 8 to find the discounted expected payoff using
            //two adjacent option prices
            //eg. at layer M, j from 0 to M: 0-1, 1-2, ...., M-M+1
            double discountedExpectedPayoff =  exp(-r_ * T_ / M_) * 0.5 * (tree_[ir+1][j+1].C + tree_[ir+1][j].C);

            //We also need the stock price at the node for path dependant options.
            double St = tree_[ir][j].S;
            //find the payoff at the node.
            tree_[ir][j].C = option.GetIntermediatePayoff(St, discountedExpectedPayoff);
        }
    }

    //return the option price
    return tree_[0][0].C;
}

