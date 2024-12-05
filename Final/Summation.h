//
// Created by 屈怡宁 on 3/8/24.
//
#ifndef FINAL_Summation_H
#define FINAL_Summation_H


#include <iostream>
#include <ctime>
#include <vector>
#include "Algorithms.h"
using std::vector;
using std::string;

//class Summation: Algorithm{
class Summation{
public:
    Summation(unsigned long M);

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




#endif //FINAL_Summation_H
