
#ifndef FINAL_ALGORITHMS_H
#define FINAL_ALGORITHMS_H

#include <iostream>
#include <cmath>
#include <numbers>
#include <ctime>
#include <vector>

using std::vector;

class Algorithms{
public:
    virtual void Generator() = 0;
    double Mean();
    double Variance();
    double Skewness();
    double Kurtosis();

protected:
    vector<double> v;
    unsigned long M_;
    double sigma_;
    double mean_;

};


#endif //FINAL_ALGORITHMS_H
