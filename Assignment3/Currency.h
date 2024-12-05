//
// Created by Helen.Kuo on 2/16/24.
//

#ifndef ASSIGNMENT3_CURRENCY_H
#define ASSIGNMENT3_CURRENCY_H

#include <iostream>
using std::string;

class Currency {

public:
    Currency();
    Currency(string symbol, double rate);
    ~Currency();

    string GetSymbol();
    double GetExchangeRate();
    void SetExchangeRate(double rate);

    double ConvertFromUSD(double value);
    double ConvertToUSD(double value);

private:
    string symbol_;
    double exchange_rate_;
};


#endif //ASSIGNMENT3_CURRENCY_H
