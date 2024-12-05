#include <iostream>
#include "currency_converter.h"
#include "currency.h"
#include <string>

using std::string;
using std::cout;
using std::endl;

Currency::Currency()
{
    cout << "default constructor" << endl;
}

Currency::~Currency()
{
    cout << "destructor" << endl;
}


Currency::Currency(string symbol, double exchangeRate)
    : symbol_(symbol),
      exchange_rate_(exchangeRate)
{
    cout << "constructor: " << symbol_ << endl;
}


//// Copy Constructor
Currency::Currency(const Currency& other)
    : symbol_(other.symbol_),
    exchange_rate_(other.exchange_rate_)
{
    cout << "copy constructor: " << symbol_ << endl;
}


//// Assignment Operator
Currency& Currency::operator=(const Currency& other) {
    if (this != &other){
        symbol_ = other.symbol_;
        exchange_rate_ = other.exchange_rate_;
    }
    cout << "assignment operator: " << symbol_ << endl;
    return *this;
}

//// Move constructor
Currency::Currency(Currency &&other)
        : symbol_(std::move(other.symbol_)),
          exchange_rate_(other.exchange_rate_)
{}


//// Move Assignment Operator
Currency& Currency::operator=(Currency &&other) {
    if (this != &other){
        symbol_ = std::move(other.symbol_);
        exchange_rate_ = other.exchange_rate_;
    }
    return *this;
}


//// Overload
//std::ostream& Currency::operator<<(std::ostream& os)
//{
//    os << "symbol=" << symbol_ << " , " << "rate=" << exchange_rate_ << std::endl;
//    return os;
//}

std::ostream& operator<<(std::ostream& os, const Currency& c)
{
    os << "symbol=" << c.symbol_ << " , " << "rate=" << c.exchange_rate_ << std::endl;
    return os;
}



string Currency::GetSymbol(){
    return symbol_;
}


string Currency::GetSymbol() const{
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


