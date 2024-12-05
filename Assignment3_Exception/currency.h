#ifndef ASSIGNMENT3_CURRENCY_H
#define ASSIGNMENT3_CURRENCY_H

#include <string>

using std::string;

class Currency{

public:
    Currency();

    ~Currency();

    Currency(string symbol, double exchangeRate);

    Currency(const Currency&);   //copy constructor

    Currency& operator = (const Currency&);  //assignment operator

    string GetSymbol();

    double GetExchangeRate();

    void SetExchangeRate(double rate);

    double ConvertToUSD(double amount);

    double ConvertFromUSD(double amount);



private:
    string symbol_;

    double exchange_rate_;

};






#endif //ASSIGNMENT3_CURRENCY_H
