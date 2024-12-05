//
// Created by 屈怡宁 on 3/8/24.
//

#ifndef FINAL_POLAR_H
#define FINAL_POLAR_H



#include <iostream>
#include <ctime>
#include <vector>
#include "Algorithms.h"
using std::vector;
using std::string;

//class Polar: Algorithm{
class Polar{
public:
    Polar(unsigned long M);

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







#endif //FINAL_POLAR_H
