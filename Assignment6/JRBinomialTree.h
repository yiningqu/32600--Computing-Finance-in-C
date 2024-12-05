
#ifndef ASSIGNMENT5_JRBINOMIALTREE_H
#define ASSIGNMENT5_JRBINOMIALTREE_H

#pragma once
#include "Option.h"
#include "PricingEngine.h"
#include <vector>

using std::vector;

//a node is used to store a stock price and an option price
struct Node
{
    double S;
    double C;
};

class BinomialTree: PricingEngine
{
public:
    BinomialTree(double S, double rate,
                 double vol, double time, unsigned long steps);

    double Price(const Option& option) override;

private:
    void buildTree();

    using Tree = vector<vector<Node>>;
    Tree tree_;

    // Member variables
    double S0_;
    double r_;
    double v_;
    double T_;
    int M_;

//    // Member variables to store pre-calculations
//    double nu_;
//    double disc_;
//    double dt_;
//    double sqrt_dt_;

    // Tree data structure
    // Nodes belong to a given time index (i.e. vertical nodes in the tree)
    // We use a vector to store them
    // using NodesAtTimeStep = vector<Node>;

    // Tree is a collection all vectors at each time step
    // We use a vector to store them
    // using Tree = vector<NodesAtTimeStep>;
    // Tree tree_;

};





#endif //ASSIGNMENT5_JRBINOMIALTREE_H
