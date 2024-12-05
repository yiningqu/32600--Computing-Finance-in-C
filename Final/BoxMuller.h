#ifndef FINAL_BOXMULLER_H
#define FINAL_BOXMULLER_H

#include <iostream>
#include <ctime>
#include <vector>
#include "Algorithms.h"
using std::vector;
using std::string;

const double PI = atan(1.0)*4;

//class BoxMuller: Algorithm{
class BoxMuller{
public:
    BoxMuller(unsigned long M);

    void Generator();
    //void Generator() override;

    double Mean();

    double Variance();

    double Skewness();

    double Kurtosis();




private:
    vector<double> v;
    unsigned long M_;
    double sigma_;
    double mean_;
};
#endif //FINAL_BOXMULLER_H
