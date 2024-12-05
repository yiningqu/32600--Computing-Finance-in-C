#include <algorithm>
#include "AmericanPut.h"
#include <cmath>

AmericanPut::AmericanPut(double K, double T) : Option(K, T) {}


double AmericanPut::Delta(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return cdf(d1_value) - 1;
}

double AmericanPut::Gamma(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return pdf(d1_value)/(S0 * v * sqrt(T_));
}

double AmericanPut::GetExpirationPayoff(double ST) const {
    return std::fmax(0.0, K_ - ST);
}

double AmericanPut::GetIntermediatePayoff(double St, double discountedExpectedPayoff) const {
    if (discountedExpectedPayoff > K_ - St){
        return discountedExpectedPayoff;
    }
    else{
        return K_ - St;
    }
}