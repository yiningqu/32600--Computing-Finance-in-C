#include <algorithm>
#include "EuropeanPut.h"
#include <cmath>

EuropeanPut::EuropeanPut(double K, double T) : Option(K, T) {}


double EuropeanPut::Delta(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return cdf(d1_value) - 1;
}

double EuropeanPut::Gamma(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return pdf(d1_value)/(S0 * v * sqrt(T_));
}

double EuropeanPut::GetExpirationPayoff(double ST) const {
    return std::fmax(0.0, K_ - ST);
}

double EuropeanPut::GetIntermediatePayoff(double St, double discountedExpectedPayoff) const {
    return discountedExpectedPayoff;
}