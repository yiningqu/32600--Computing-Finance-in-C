
#ifndef ASSIGNMENT2_CURRENCYFACTORY_H
#define ASSIGNMENT2_CURRENCYFACTORY_H

#include "currency.h"

class CurrencyFactory{
public:
    CurrencyFactory(); //也可以不写因为默认会自动generate
    Currency* GetCurrency(int currencyType); // lazy initialization
    ~CurrencyFactory(); //only for free-store objects
private:
    Currency* currencies_[1]; //eager initialization
};

#endif //ASSIGNMENT2_CURRENCYFACTORY_H
