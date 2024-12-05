#include "CurrencyFactory.h"



CurrencyFactory::CurrencyFactory(){
    currencies_[USD] = new Currency("USD", 1.0);
//    currencies_[EUR] = Currency("EUR", 0.94);
//    currencies_[GBP] = Currency("GBP", 0.83);
//    currencies_[JPY] = Currency("JPY", 148);
//    currencies_[CAD] = Currency("CAD", 1.1);
//    currencies_[AUD] = Currency("AUD", 1.35);
//    currencies_[INR] = Currency("INR", 0.92);
}



Currency* CurrencyFactory::GetCurrency(int currencyType) {
//    switch(currencyType){
//        case EUR:
//            return Currency("EUR", 0.94);
//        case GBP:
//            return Currency("GBP", 0.83);
//        case JPY:
//            return Currency("JPY", 148);
//        case CAD:
//            return Currency("CAD", 1.1);
//        case AUD:
//            return Currency("AUD", 1.35);
//        case INR:
//            return Currency("INR", 0.92);
//        default:
//            return Currency("USD", 1.0);
//    }
    return currencies_[currencyType];
}


CurrencyFactory::~CurrencyFactory() {
    for (int i = 0; i < 1; ++i){
        delete currencies_[i];
    }
}


