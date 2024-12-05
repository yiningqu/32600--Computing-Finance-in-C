
#ifndef ASSIGNMENT4__BLACK_SCHOLES__EUROPEANCALL_H
#define ASSIGNMENT4__BLACK_SCHOLES__EUROPEANCALL_H
#include "Option.h"

class EuropeanCall: public Option{
public:
    EuropeanCall(double K, double T);
    double Price(double S0, double r, double v) override;
//    double Price(double S0, double r, double v) const override;
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
};


#endif //ASSIGNMENT4__BLACK_SCHOLES__EUROPEANCALL_H
