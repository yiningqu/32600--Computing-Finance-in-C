#include <iostream>
#include "currency.h"
#include "CurrencyFactory.h"

using std::cout;
using std::cin;
using std::endl;



int main() {
    // part d
    CurrencyFactory factory;
    for (int i = 0; i < 6; i ++){
        Currency* base = factory.GetCurrency(i);
        cout << base->GetSymbol() << ", " << base->GetCountry()  << ", " << base->GetExchangeRate() << endl;
    }

    Currency* c = new Currency();
}
