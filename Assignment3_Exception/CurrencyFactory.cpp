#include "CurrencyFactory.h"
#include <fstream>
#include <exception>
#include <sstream>
#include <utility>
#include <string>
using std::string;


// Change #2: Using std::map
// Change #7: Using a Shared Pointer
CurrencyFactory::CurrencyFactory(){
    currenciesMap_["USD"] = new Currency("USD", 1.00);
    currenciesMap_["EUR"] = new Currency("EUR", 0.88);
    currenciesMap_["GBP"] = new Currency("GBP", 0.73);
    currenciesMap_["CAD"] = new Currency("CAD", 1.25);
    currenciesMap_["AUD"] = new Currency("AUD", 1.39);
    currenciesMap_["INR"] = new Currency("INR", 74.0);
    currenciesMap_["JPY"] = new Currency("JPY", 129.56);
}

//Exception
Currency* CurrencyFactory::GetCurrency(string currencyType) {
    auto iter = currenciesMap_.find(currencyType);
    if (iter == currenciesMap_.end()){
        throw std::runtime_error("Currency not found");
    }
    return iter->second;
}


CurrencyFactory::~CurrencyFactory(){
    for (auto iter=currenciesMap_.begin();
        iter != currenciesMap_.end(); ++iter){
        delete iter->second;
    }

}

