#ifndef ASSIGNMENT6_MCPRICER_H
#define ASSIGNMENT6_MCPRICER_H
#include "Option.h"
#include "PricingEngine.h"


class MCPricer{
public:
    MCPricer(double S, double v, double r, unsigned long M);
    //没有PricingEngine就没有这个Part

    double Price(const Option& option);
    //Option&: Polymorphism (这样就是European Call和Put都可以)

//    double MCPricer::Price(const Option& option, double S, double v, double r, unsigned long M)
////Without PricingEngine


private:
    double S_;
    double v_;
    double r_;
    unsigned long M_;

};



#endif //ASSIGNMENT6_MCPRICER_H
