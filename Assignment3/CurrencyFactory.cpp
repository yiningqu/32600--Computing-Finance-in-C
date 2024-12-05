//
// Created by Helen.Kuo on 2/16/24.
//

#include "CurrencyFactory.h"

CurrencyFactory::CurrencyFactory() {
    // Change #2: Create currencies ahead of time (eager initialization).
    // Change #7: Using a Shared Pointer (Smart Pointer) -
    currency_["USD"] = std::make_shared<Currency>("USD", 1.00);
    currency_["EUR"] = std::make_shared<Currency>("EUR", 0.88);
    currency_["GBP"] = std::make_shared<Currency>("GBP", 0.73);
    currency_["CAD"] = std::make_shared<Currency>("CAD", 1.25);
    currency_["AUD"] = std::make_shared<Currency>("AUD", 1.39);
    currency_["CNY"] = std::make_shared<Currency>("CNY", 6.78);
    currency_["JPY"] = std::make_shared<Currency>("JPY", 129.56);
}

// Change #6: Using std::optional
// Change #7: Using a Shared Pointer (Smart Pointer) -
std::optional<std::shared_ptr<Currency>> CurrencyFactory::GetCurrency(string symbol) {
    auto iter = currency_.find(symbol);
    if (iter == currency_.end()) {
        return std::nullopt;
    } else {
        return iter->second;
    }
}

CurrencyFactory::~CurrencyFactory() {
    // Automatic cleanup, thanks to shared_ptr
}