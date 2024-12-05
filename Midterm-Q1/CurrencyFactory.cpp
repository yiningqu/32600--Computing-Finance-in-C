//version 2 for part c
#include "CurrencyFactory.h"

CurrencyFactory::CurrencyFactory() {
    currencies_[USD] = new Currency("USD", "USA", 1.00);
    currencies_[EUR] = new Currency("EUR", "Euro", 0.92);
    currencies_[GBP] = new Currency("GBP", "Britain", 0.79);
}


Currency* CurrencyFactory::GetCurrency(int currencyType){
//    if (currencies_[currencyType] == nullptr){
//        currencies_[currencyType] = new Currency();
//    }
//
//
    if (currencyType == USD || currencyType == EUR || currencyType == GBP){
        return currencies_[currencyType];
    }
    else{
        if (currencyType == CNY){
            currencies_[CNY] =  new Currency("CNY", "China", 7.15);
            return currencies_[CNY];
        }
        else if (currencyType == JPY) {
            currencies_[JPY] = new Currency("JPY", "Japan", 148.05);
            return currencies_[JPY];
        }
        else if (currencyType == MXN) {
            currencies_[MXN] = new Currency("MXN", "Mexico", 17.17);
            return currencies_[MXN];
        }
        else{
            return new Currency("USD", "USA", 1.00);
        }
    }
}


CurrencyFactory::~CurrencyFactory() {
    for (int i = 0; i < 7; ++i){
        delete currencies_[i];
    }
}