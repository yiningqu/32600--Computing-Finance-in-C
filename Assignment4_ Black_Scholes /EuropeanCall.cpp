#include "EuropeanCall.h"

EuropeanCall::EuropeanCall(double K, double T) : Option(K, T) {}

double EuropeanCall::Price(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    double d2_value = d2(S0,r,v);
    return S0 * cdf(d1_value) - K_*exp(-r*T_)*cdf(d2_value);
}

//double EuropeanCall::Price(double S0, double r, double v) const{
//    double d1_value = d1(S0,r,v);
//    double d2_value = d2(S0,r,v);
//    return S0 * cdf(d1_value) - K_*exp(-r*T_)*cdf(d2_value);
//}

double EuropeanCall::Delta(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return cdf(d1_value);
}

double EuropeanCall::Gamma(double S0, double r, double v){
    double d1_value = d1(S0,r,v);
    return pdf(d1_value)/(S0 * v * sqrt(T_));
}