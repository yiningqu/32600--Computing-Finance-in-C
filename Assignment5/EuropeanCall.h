
#ifndef ASSIGNMENT5_EUROPEANCALL_H
#define ASSIGNMENT5_EUROPEANCALL_H
#include "Option.h"
class EuropeanCall: public Option{
public:
    EuropeanCall(double K, double T);
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
    double GetExpirationPayoff(double ST) const override;
};

#endif //ASSIGNMENT5_EUROPEANCALL_H
