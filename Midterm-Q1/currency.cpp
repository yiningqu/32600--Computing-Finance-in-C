#include <iostream>
#include "currency.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


//default constructor
Currency::Currency()
{
    cout << "default constructor" << endl;
}

//destructor
Currency::~Currency()
{
    cout << "destructor" << endl;
}

//constructor
Currency::Currency(string symbol, string country, double exchangeRate)
        : symbol_(symbol),
          country_(country),
          exchange_rate_(exchangeRate)
{
    cout << "constructor: " << symbol_ << endl;
}



//copy constructor
Currency::Currency(const Currency& other)
        : symbol_(other.symbol_),
          country_(other.country_),
          exchange_rate_(other.exchange_rate_)
{
    cout << "copy constructor: " << symbol_ << endl;
}


//assignment operator
Currency& Currency::operator=(const Currency& other) {
    if (this != &other){
        symbol_ = other.symbol_;
        country_ = other.country_;
        exchange_rate_ = other.exchange_rate_;
    }
    cout << "assignment operator: " << symbol_ << endl;
    return *this;
}


//Getter
string Currency::GetSymbol(){
    return symbol_;
}

double Currency::GetExchangeRate(){
    return exchange_rate_;
}

string Currency::GetCountry(){
    return country_;
}


//Setter
void Currency::SetExchangeRate(double rate){
    exchange_rate_ = rate;
}

void Currency::SetSymbol(string symbol){
    symbol_ = symbol;
}

void Currency::SetCountry(string country){
    country_ = country;
}


//double Currency::ConvertToUSD(double amount){
//    return amount / exchange_rate_;
//}
//
//double Currency::ConvertFromUSD(double amount){
//    return amount * exchange_rate_;
//
//}
