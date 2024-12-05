#include "MCPricer.h"
#include "BoxMuller.h"
#include <cmath>
#include <random>

////Generator(Engines)
double MCPricer::Price(const Option& option, double S, double v, double r, unsigned long M) {
    std::mt19937 e;
    e.seed(771);
    std::normal_distribution<double> d(0, 1);
    double T = option.GetTimeToExpiration();
    double totalPayoff = 0.0;
    for (unsigned int i = 0; i < M; ++i){
        double z_i = d(e);
        double ST = S*exp((r-v*v/2.0)*T + v*z_i*sqrt(T));
        double payoff = option.GetExpirationPayoff(ST);
        totalPayoff += payoff;
    }
    double discountPayoff = exp(-r * T) * totalPayoff / M;
    return discountPayoff;
}

////BoxMuller
//double MCPricer::Price(const Option& option, double S, double v, double r, unsigned long M) {
//    double T = option.GetTimeToExpiration();
//    double totalPayoff = 0.0;
//    for (unsigned int i = 0; i < M; ++i){
//        double z_i = BoxMuller();
//        double ST = S*exp((r-v*v/2.0)*T + v*z_i*sqrt(T));
//        double payoff = option.GetExpirationPayoff(ST);
//        totalPayoff += payoff;
//    }
//    double discountPayoff = exp(-r * T) * totalPayoff / M;
//    return discountPayoff;
//}