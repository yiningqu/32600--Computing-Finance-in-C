
#ifndef ASSIGNMENT5_AMERICANPUT_H
#define ASSIGNMENT5_AMERICANPUT_H
#include "Option.h"
class AmericanPut: public Option{
public:
    AmericanPut(double K, double T);
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
    double GetExpirationPayoff(double ST) const override;
    double GetIntermediatePayoff(double St, double discountedExpectedPayoff) const override;
};

#endif //ASSIGNMENT5_AMERICANPUT_H
