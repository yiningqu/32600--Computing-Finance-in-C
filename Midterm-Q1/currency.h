// Question 1 - part(a)

#ifndef MIDTERM_Q1_CURRENCY_H
#define MIDTERM_Q1_CURRENCY_H

#include <string>
using std::string;

enum CurrencyType { USD = 0, EUR = 1, GBP = 2, CNY = 3, JPY = 4, MXN = 5};




class Currency{

public:
    //default constructor
    Currency();

    //destructor
    ~Currency();

    //constructor
    Currency(string symbol, string country, double exchangeRate);


    //copy constructor
    Currency(const Currency&);


    //assignment operator
    Currency& operator = (const Currency&);


    //Getter
    string GetSymbol();

    double GetExchangeRate();

    string GetCountry();


    //Setter
    void SetExchangeRate(double rate);

    void SetSymbol(string symbol);

    void SetCountry(string country);


//    double ConvertToUSD(double amount);
//
//    double ConvertFromUSD(double amount);



private:
    string symbol_;

    string country_;

    double exchange_rate_;

};


#endif //MIDTERM_Q1_CURRENCY_H

