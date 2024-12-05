
#ifndef ASSIGNMENT3_CURRENCYFACTORY_H
#define ASSIGNMENT3_CURRENCYFACTORY_H
#include "currency.h"
#include <map>
#include <string>
#include <memory>
#include <optional>
using std::map;
using std::string;
using std::optional;


class CurrencyFactory{
public:
    CurrencyFactory();
    ~CurrencyFactory();
    Currency* GetCurrency(string currencyType);

private:
    map<string, Currency*> currenciesMap_;
};

#endif //ASSIGNMENT3_CURRENCYFACTORY_H
