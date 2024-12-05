#include <iostream>
#include "CurrencyConverter.h"

double convertCurrency(int baseCurrency, int foreignCurrency, double amount){
    double rate1;
    double rate2;
    switch (baseCurrency) {
        case 1: //USD
            rate1 = 1;
            break;
        case 2: //EUR
            rate1 = 0.92;
            break;
        case 3: //GBP
            rate1 = 0.79;
            break;
        case 4: //JPY
            rate1 = 148.13;
            break;
        case 5: //CAD
            rate1 = 1.35;
            break;
        case 6: //AUD
            rate1 = 1.52;
            break;
        case 7: //INR
            rate1 = 83.12;
            break;
        default:
            rate1 = 0;
    }



    switch (foreignCurrency) {
        case 1: //USD
            rate2 = 1;
            break;
        case 2: //EUR
            rate2 = 0.92;
            break;
        case 3: //GBP
            rate2 = 0.79;
            break;
        case 4: //JPY
            rate2 = 148.13;
            break;
        case 5: //CAD
            rate2 = 1.35;
            break;
        case 6: //AUD
            rate2 = 1.52;
            break;
        case 7: //INR
            rate2 = 83.12;
            break;
        default:
            rate2 = 0;
    }

    double result = amount / rate1 * rate2;
    return result;
}
