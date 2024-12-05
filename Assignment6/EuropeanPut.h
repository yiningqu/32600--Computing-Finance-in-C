#ifndef ASSIGNMENT6_EUROPEANPUT_H
#define ASSIGNMENT6_EUROPEANPUT_H
#include "Option.h"
class EuropeanPut: public Option{
public:
    EuropeanPut(double K, double T);
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
    double GetExpirationPayoff(double ST) const override;
    double GetIntermediatePayoff(double St, double discountedExpectedPayoff) const override;
};

#endif //ASSIGNMENT6_EUROPEAN_H
