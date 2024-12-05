#include "AmericanCall.h"
#include <cmath>

AmericanCall::AmericanCall(double K, double T) : Option(K, T) {}

double AmericanCall::Delta(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return cdf(d1_value);
}

double AmericanCall::Gamma(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return pdf(d1_value)/(S0 * v * sqrt(T_));
}

double AmericanCall::GetExpirationPayoff(double ST) const {
    return std::fmax(0.0, ST - K_);
}

double AmericanCall::GetIntermediatePayoff(double St, double discountedExpectedPayoff) const {
    if (discountedExpectedPayoff > St - K_){
        return discountedExpectedPayoff;
    }
    else{
        return St - K_;
    }
}