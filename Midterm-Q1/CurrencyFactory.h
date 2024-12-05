//part (c) -- version 2
#ifndef MIDTERM_Q1_CURRENCYFACTORY_H
#define MIDTERM_Q1_CURRENCYFACTORY_H

#include "currency.h"

class CurrencyFactory{
public:
    CurrencyFactory();
    Currency* GetCurrency(int currencyType);
    ~CurrencyFactory();

private:
    Currency* currencies_[7];
};


#endif //MIDTERM_Q1_CURRENCYFACTORY_H


