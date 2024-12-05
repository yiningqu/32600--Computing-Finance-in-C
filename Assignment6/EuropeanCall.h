
#ifndef ASSIGNMENT6_EUROPEANCALL_H
#define ASSIGNMENT6_EUROPEANCALL_H
#include "Option.h"
class EuropeanCall: public Option{
public:
    EuropeanCall(double K, double T);
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
    double GetExpirationPayoff(double ST) const override;
    double GetIntermediatePayoff(double St, double discountedExpectedPayoff) const override;
};

#endif //ASSIGNMENT6_EUROPEANCALL_H
