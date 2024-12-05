#include "EuropeanCall.h"
#include <cmath>

EuropeanCall::EuropeanCall(double K, double T) : Option(K, T) {}

double EuropeanCall::Delta(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return cdf(d1_value);
}

double EuropeanCall::Gamma(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return pdf(d1_value)/(S0 * v * sqrt(T_));
}

double EuropeanCall::GetExpirationPayoff(double ST) const {
    return std::fmax(0.0, ST - K_);
}

double EuropeanCall::GetIntermediatePayoff(double St, double discountedExpectedPayoff) const {
    return discountedExpectedPayoff;
}