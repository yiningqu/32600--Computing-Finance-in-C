#include <iostream>
#include "Option.h"
#include "EuropeanCall.h"
#include "EuropeanPut.h"
using std::cout;
using std::endl;
using std::string;

int main() {
    double S0_Call = 100;
    double K_Call = 100;
    double T_Call = 1;
    double v_Call = 0.3;
    double r_Call = 0.05;

    double S0_Put = 120;
    double K_Put = 120;
    double T_Put = 2;
    double v_Put = 0.4;
    double r_Put = 0.1;

    EuropeanCall callOption (K_Call,T_Call);

    cout << "Call Price: " << callOption.Price(S0_Call, r_Call, v_Call) << endl;
    cout << "Call Delta: " << callOption.Delta(S0_Call, r_Call, v_Call) << endl;
    cout << "Call Gamma: " << callOption.Gamma(S0_Call, r_Call, v_Call) << endl;

    EuropeanPut putOption (K_Put,T_Put);

    cout << "Put Price: " << putOption.Price(S0_Put, r_Put, v_Put) << endl;
    cout << "Put Delta: " << putOption.Delta(S0_Put, r_Put, v_Put) << endl;
    cout << "Put Gamma: " << putOption.Gamma(S0_Put, r_Put, v_Put) << endl;


    ////Polymorphism
    //1. Pointer
    Option* option1 = new EuropeanCall(K_Call, T_Call);
    cout << option1->Price(S0_Call, r_Call, v_Call) << endl;

    //2. Reference
    EuropeanPut put(K_Put, T_Put);
    Option& option2 = put;
    cout << option2.Price(S0_Put, r_Put, v_Put) << endl;


    ////Virtual Destructor


}
