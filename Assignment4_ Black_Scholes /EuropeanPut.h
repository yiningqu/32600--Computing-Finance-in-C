
#ifndef ASSIGNMENT4__BLACK_SCHOLES__EUROPEANPUT_H
#define ASSIGNMENT4__BLACK_SCHOLES__EUROPEANPUT_H
#include "Option.h"
class EuropeanPut: public Option{
public:
    EuropeanPut(double K, double T);
    double Price(double S0, double r, double v) override;
//    double Price(double S0, double r, double v) const override;
    double Delta(double S0, double r, double v) override;
    double Gamma(double S0, double r, double v) override;
};

#endif //ASSIGNMENT4__BLACK_SCHOLES__EUROPEANPUT_H
