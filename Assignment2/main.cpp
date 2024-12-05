#include <iostream>
#include "currency.h"
#include "CurrencyFactory.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
//    double amount;
//    int baseCurrency, foreignCurrency;
//
//    do {
//        cout << "Enter amount. Enter 0 to exit: ";
//        cin >> amount;
//
//        if (amount == 0) {
//            break;
//        }
//
//        cout << "Enter base currency: (USD=1 / EUR=2 / GBP=3 / JPY=4 / CAD=5 / AUD=6 / INR=7): ";
//        cin >> baseCurrency;
//
//        cout << "Enter foreign currency: (USD=1 / EUR=2 / GBP=3 / JPY=4 / CAD=5 / AUD=6 / INR=7): ";
//        cin >> foreignCurrency;
//
//        double result = ConvertCurrency(static_cast<CurrencyType>(baseCurrency), static_cast<CurrencyType>(foreignCurrency), amount);
//        cout << "Amount in foreignCurrency is: " << result << endl;
//
//    } while (true);
//
//    return 0;
//
//
//
//
////for copy constructor
//    Currency c1("USD", 1.0);
//    Currency c2(c1);
////    Currency c2 = c1;
//    Currency c3(c1);
//    Currency c4(c1);

////for assignment operator
    Currency c1("USD", 1.0);
//    Currency c2("EUR", 0.8);
//    Currency c3("CAD",1.2);
//
//    c3 = c2 = c1;
//
//
//
//
////CurrencyFactory

////1. Automatic object
////有很多很多的constructor
//CurrencyFactory factory;
///*call CurrencyFactory: private part有call Currency to create array: default constructor
// * 在CurrencyFactory()里面create currency object: constructor
// * assign currencies_[USD] to currency object: assignment operator
// * after store copy Currency("USD", 1.0) dies: destructor
// */
//Currency baseCurrency = factory.GetCurrency(USD);
///* create a new Currency called baseCurrency from factory: copy constructor
// * currency factory destroyed: destructor
// * array destroyed: destructor
// */
//cout << baseCurrency.GetExchangeRate() << endl;




//2. free-store object: does not delete when out of scope
//只是 pass address around，而不用create objects
//所以create一个object不需要很多步骤
// 可以不用Currency的default constructor, 因为现在array是address of Currency
//int aCurrency = 0;
//CurrencyFactory factories;
//Currency* c = factories.GetCurrency(aCurrency);
//delete c;
//
//
////两者效果一样
//(*c).GetExchangeRate();
//(*c).GetSymbol();
//
//c->GetExchangeRate();
//c->GetSymbol();
//



////3. Overload Operator
//Currency c("USD", 1.0);
////c.operator<<(cout); //print it out "symbol = USD, rate = 1.0"
////c << cout;  //the same result from the second line of code
//operator <<(cout, c);
//cout << c; //same
//
//
//
////4. Constant Object
//const Currency d("CAD", 1.0);
//cout << d.GetSymbol() << endl;

}
