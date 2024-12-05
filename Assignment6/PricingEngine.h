#ifndef ASSIGNMENT5_PRICINGENGINE_H
#define ASSIGNMENT5_PRICINGENGINE_H

#include "Option.h"

class PricingEngine{
    virtual double Price(const Option& option) = 0;
};

#endif //ASSIGNMENT5_PRICINGENGINE_H
