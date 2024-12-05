#include "Option.h"

Option::Option(double K, double T): K_(K), T_(T)  {}

double Option::d1(double S0, double r, double v) {
    return log(S0 * exp(r * T_) / K_) / (v * sqrt(T_)) + v * sqrt(T_) / 2;
}

double Option::d2(double S0, double r, double v) {
    return log(S0 * exp(r * T_) / K_) / (v * sqrt(T_)) - v * sqrt(T_) / 2;
}

double Option::cdf(double x){
    return 0.5*(1+erf(x/sqrt(2)));
}

double Option::pdf(double x){
    return exp(-0.5*pow(x,2))/sqrt(2*PI);
}