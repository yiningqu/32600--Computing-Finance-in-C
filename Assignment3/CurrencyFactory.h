//
// Created by Helen.Kuo on 2/16/24.
//

#ifndef ASSIGNMENT3_CURRENCYFACTORY_H
#define ASSIGNMENT3_CURRENCYFACTORY_H

#include "Currency.h"
#include <map>
#include <memory> // Include for std::shared_ptr
#include <optional> // Include for std::optional

using namespace std;

// Change #1: The CurrencyFactory class - relocate Currency object creation to a class (CurrencyFactory).
class CurrencyFactory {
public:
    CurrencyFactory();
    // Change #7: Using a Shared Pointer (Smart Pointer)
    std::optional<std::shared_ptr<Currency>> GetCurrency(string symbol); // Change #6: Using std::optional
    ~CurrencyFactory();

private:
    // Change #4: Using a Map
    map<string, std::shared_ptr<Currency>> currency_; // Change #7: Using shared_ptr for automatic memory management
};
#endif //ASSIGNMENT3_CURRENCYFACTORY_H
