#ifndef ASSIGNMENT5_OPTION_H
#define ASSIGNMENT5_OPTION_H
#include <cmath>
#include <numbers>
#include "BoxMuller.h"

class Option{
public:
    Option(double K, double T);
    virtual double Delta(double S0, double r, double v) = 0;
    virtual double Gamma(double S0, double r, double v) = 0;
    virtual ~Option() = default;
    virtual double GetTimeToExpiration() const { return T_; };
    virtual double GetExpirationPayoff(double ST) const = 0;

    double cdf(double x);
    double pdf(double x);

protected:
    double d1(double S0, double r, double v);
    double d2(double S0, double r, double v);
    double K_;
    double T_;
};

#endif //ASSIGNMENT5_OPTION_H
