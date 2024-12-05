#include <iostream>

#include "CurrencyFactory.h"

using namespace std;

int main() {
    int proceed = 1;

    while (proceed) {
        cout << "Welcome to Currency converter!" << endl;
        double amount;
        string base, foreign;

        cout << "Enter base currency (USD;EUR;GBP;CAD;AUD;CNY;JPY): " << endl;
        cin >> base;

        cout << "Enter foreign currency (USD;EUR;GBP;CAD;AUD;CNY;JPY): "<< endl;
        cin >> foreign;

        cout << "Enter the amount of base currency: " << endl;
        cin >> amount;

        try {
            CurrencyFactory currencyFactory;
            auto baseCurrencyOpt = currencyFactory.GetCurrency(base);
            auto foreignCurrencyOpt = currencyFactory.GetCurrency(foreign);

            // Check if currencies were found
            if (!baseCurrencyOpt || !foreignCurrencyOpt) {
                cout << "Error: One of the currencies not found." << endl;
                // Prompt to continue or exit
                cout << "Enter 1 to proceed, 0 to exit: ";
                cin >> proceed;
                continue; // Skip the rest of the loop if currency not found
            }

            // Dereference std::optional to get std::shared_ptr<Currency>
            auto baseCurrency = *baseCurrencyOpt;
            auto foreignCurrency = *foreignCurrencyOpt;

            // Perform conversion
            double convertedAmount = foreignCurrency->ConvertFromUSD(baseCurrency->ConvertToUSD(amount));
            cout << "The converted amount is " << convertedAmount << ". \n";

        } catch (runtime_error& e) {
            // Handle any potential runtime errors
            cout << "An error occurred: " << e.what() << endl;  // Change #5: Using Exceptions
        }

        // Prompt to continue or exit
        cout << "Enter 1 to proceed, 0 to exit: ";
        cin >> proceed;
    }

    cout << "Thank you for using the Currency Converter." << endl;

    return 0;
}
