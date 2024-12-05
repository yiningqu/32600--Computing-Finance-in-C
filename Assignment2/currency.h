#ifndef ASSIGNMENT2_CURRENCY_H
#define ASSIGNMENT2_CURRENCY_H
#include <iostream>
#include <string>
using std::string;


enum CurrencyType { USD = 1, EUR = 2, GBP = 3, JPY = 4, CAD = 5, AUD = 6, INR = 7 };


class Currency{

public:
    Currency();

    ~Currency();

    Currency(string symbol, double exchangeRate);

    Currency(const Currency&);   //copy constructor

    Currency& operator = (const Currency& other);  //assignment operator

    //// Operator Overloading
    //want to overload this operator
    //std::ostream& operator <<(std::ostream& os);
    friend std::ostream& operator<<(std::ostream& os, const Currency& c);

    //// 注意！！！！！：
    //// default build: 只有当copy constructor, move constructor, copy assignment operator, destructor没有被define 才会自动build
    //// Move Operation
    Currency(Currency&& other); //move constructor
    Currency& operator = (Currency&& other); //move assignment operator



    string GetSymbol();

    string GetSymbol() const;

    double GetExchangeRate();

    void SetExchangeRate(double rate);

    double ConvertToUSD(double amount);

    double ConvertFromUSD(double amount);



private:
    string symbol_;

    double exchange_rate_;

};





#endif //ASSIGNMENT2_CURRENCY_H
