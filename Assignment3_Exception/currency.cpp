#include <iostream>
#include "currency.h"
#include <string>

using std::string;
using std::cout;
using std::endl;

Currency::Currency()
{
}

Currency::~Currency()
{
}


Currency::Currency(string symbol, double exchangeRate)
        : symbol_(symbol),
          exchange_rate_(exchangeRate)
{
}

Currency::Currency(const Currency& other)
        : symbol_(other.symbol_),
          exchange_rate_(other.exchange_rate_)
{
}

Currency& Currency::operator=(const Currency& other) {
    if (this != &other){
        symbol_ = other.symbol_;
        exchange_rate_ = other.exchange_rate_;
    }
    return *this;
}

string Currency::GetSymbol(){
    return symbol_;
}

double Currency::GetExchangeRate(){
    return exchange_rate_;
}

void Currency::SetExchangeRate(double rate){
    exchange_rate_ = rate;
}

double Currency::ConvertToUSD(double amount){
    return amount / exchange_rate_;
}

double Currency::ConvertFromUSD(double amount){
    return amount * exchange_rate_;

}