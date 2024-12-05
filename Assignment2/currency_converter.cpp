//#include "currency.h"
//#include "currency_converter.h"
//
//double ConvertCurrency(CurrencyType baseCurrency, CurrencyType foreignCurrency, double amount){
//    double amountInUSD = 0.0;
//    switch (baseCurrency){
//        case USD: {
//            Currency usd("USD", 1.0);
//            amountInUSD = usd.ConvertToUSD(amount);
//            break;
//        }
//        case EUR: {
//            Currency eur("EUR", 0.92);
//            amountInUSD = eur.ConvertToUSD(amount);
//            break;
//        }
//        case GBP: {
//            Currency gbp("GBP", 0.79);
//            amountInUSD = gbp.ConvertToUSD(amount);
//            break;
//        }
//        case JPY: {
//            Currency jpy("JPY", 1.35);
//            amountInUSD = jpy.ConvertToUSD(amount);
//            break;
//        }
//        case CAD: {
//            Currency cad("CAD", 1.35);
//            amountInUSD = cad.ConvertToUSD(amount);
//            break;
//        }
//        case AUD: {
//            Currency aud("AUD", 0.92);
//            amountInUSD = aud.ConvertToUSD(amount);
//            break;
//        }
//        case INR: {
//            Currency inr("INR", 0.92);
//            amountInUSD = inr.ConvertToUSD(amount);
//            break;
//        }
//    }
//
//    double amountInForeign = 0.0;
//    switch (foreignCurrency){
//        case USD: {
//            Currency usd("USD", 1.0);
//            amountInForeign = usd.ConvertFromUSD(amount);
//            break;
//        }
//        case EUR: {
//            Currency eur("EUR", 0.92);
//            amountInForeign = eur.ConvertFromUSD(amount);
//            break;
//        }
//        case GBP: {
//            Currency gbp("GBP", 0.79);
//            amountInForeign = gbp.ConvertFromUSD(amount);
//            break;
//        }
//        case JPY: {
//            Currency jpy("JPY", 1.35);
//            amountInForeign = jpy.ConvertFromUSD(amount);
//            break;
//        }
//        case CAD: {
//            Currency cad("CAD", 1.35);
//            amountInForeign = cad.ConvertFromUSD(amount);
//            break;
//        }
//        case AUD: {
//            Currency aud("AUD", 0.92);
//            amountInForeign = aud.ConvertFromUSD(amount);
//            break;
//        }
//        case INR: {
//            Currency inr("INR", 0.92);
//            amountInForeign = inr.ConvertFromUSD(amount);
//            break;
//        }
//    }
//
//    return amountInForeign;
//}
