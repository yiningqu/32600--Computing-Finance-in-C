
#ifndef ASSIGNMENT5_AMERICANCALL_H
#define ASSIGNMENT5_AMERICANCALL_H
#include "Option.h"
class AmericanCall: public Option{
public:
    AmericanCall (double K, double T);
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
    double GetExpirationPayoff(double ST) const override;
    double GetIntermediatePayoff(double St, double discountedExpectedPayoff) const override;
};




#endif //ASSIGNMENT5_AMERICANCALL_H
