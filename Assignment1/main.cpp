#include <iostream>
#include "CurrencyConverter.h"

using std:: cout;
using std:: endl;
using std:: cin;

int main() {
    double amount;
    int baseCurrency, foreignCurrency;

    do{
        cout << "Enter amount. Enter 0 to exit: ";
        cin >> amount;

        if (amount == 0) {
            break;
        }

        cout << "Enter base currency: (USD=1 / EUR=2 / GBP=3 / JPY=4 / CAD=5 /AUD=6 / INR=7)";
        cin >> baseCurrency;

        cout << "Enter foreign currency: (USD=1 / EUR=2 / GBP=3 / JPY=4 / CAD=5 /AUD=6 / INR=7)";
        cin >> foreignCurrency;

        double result = convertCurrency(baseCurrency, foreignCurrency, amount);
        cout << "Amount in foreignCurrency is: " << result << endl;

    } while (true);
    return 0;
}





//
//    cout << "Program exited. Thank you!" << endl;
//    return 0;
//}