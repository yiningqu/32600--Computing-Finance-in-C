#ifndef ASSIGNMENT5_MCPRICER_H
#define ASSIGNMENT5_MCPRICER_H
#include "Option.h"

class MCPricer{
public:
    double Price(const Option& option, //Option&: Polymorphism (这样就是European Call和Put都可以)
                 double S,
                 double v,
                 double r,
                 unsigned long M);
};



#endif //ASSIGNMENT5_MCPRICER_H
