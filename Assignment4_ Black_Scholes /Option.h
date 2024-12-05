
#ifndef ASSIGNMENT4__BLACK_SCHOLES_OPTION_H
#define ASSIGNMENT4__BLACK_SCHOLES_OPTION_H
#include <cmath>
#include <numbers>

const double PI = atan(1.0)*4;

class Option{
public:
    Option(double K, double T);
    virtual double Price(double S0, double r, double v) = 0;
//    virtual double Price(double S0, double r, double v) const = 0;
    virtual double Delta(double S0, double r, double v) = 0;
    virtual double Gamma(double S0, double r, double v) = 0;
    double cdf(double x);
    double pdf(double x);

protected:
    double d1(double S0, double r, double v);
    double d2(double S0, double r, double v);
    double K_;
    double T_;


};





#endif //ASSIGNMENT4__BLACK_SCHOLES_OPTION_H
