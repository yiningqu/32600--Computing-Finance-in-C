#include <iostream>
#include "Option.h"
#include "EuropeanCall.h"
#include "EuropeanPut.h"
#include "MCPricer.h"
#include <cmath>
#include <ctime>
#include <random>

using std::cout;
using std::endl;
using std::string;



int main() {
    //Create Random Number的几种方法：

    ////1.BoxMuller
    //srand(17);
    //srand(static_cast<unsigned  int>(time(0)));



    double S = 100.0;
    double K = 100.0;
    double T = 2.0;
    double v = 0.3;
    double r = 0.01;
    int M_1 = 10000;
    int M_2 = 100000;
    int M_3 = 1000000;

    MCPricer mc;

    EuropeanCall callOption (K,T);

    double callPrice_1 = mc.Price(callOption, S, v, r, M_1);
    double callPrice_2 = mc.Price(callOption, S, v, r, M_2);
    double callPrice_3 = mc.Price(callOption, S, v, r, M_3);

    cout << "Call Price for 10000 paths: " << callPrice_1 << endl;
    cout << "Call Price for 100000 paths: " << callPrice_2 << endl;
    cout << "Call Price for 1000000 paths: " << callPrice_3 << endl;

    EuropeanPut putOption (K,T);

    double putPrice_1 = mc.Price(putOption, S, v, r, M_1);
    double putPrice_2 = mc.Price(putOption, S, v, r, M_2);
    double putPrice_3 = mc.Price(putOption, S, v, r, M_3);

    cout << "Put Price for 10000 paths: " << putPrice_1 << endl;
    cout << "Put Price for 100000 paths: " << putPrice_2 << endl;
    cout << "Put Price for 1000000 paths: " << putPrice_3 << endl;





}
