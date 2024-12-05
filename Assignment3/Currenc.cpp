//
// Created by Helen.Kuo on 2/16/24.
//
#include "Currency.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;


double Currency::GetExchangeRate() {
    return exchange_rate_;
}

void Currency::SetExchangeRate(double exchange_rate) {
    exchange_rate_ = exchange_rate;
}

string Currency::GetSymbol() {
    return symbol_;
}

Currency::Currency()
        : symbol_(""),
          exchange_rate_(0.0)
{}

Currency::Currency(string symbol, double exchange_rate)
        : symbol_(symbol),
          exchange_rate_(exchange_rate)
{}

double Currency::ConvertFromUSD(double value) {
    return value * GetExchangeRate();
}

double Currency::ConvertToUSD(double value){
    return value / GetExchangeRate();
}

Currency::~Currency(){}



