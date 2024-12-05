#include "Summation.h"
#include <cstdlib>
#include <cmath>

Summation::Summation(unsigned long M)
        : M_(M)
{}

void Summation::Generator(){
    v.reserve(M_);
    for (int i = 0; i < M_ ; ++ i){
        double x;
        double sum = 0;
        for (int j = 0; j < 12; j++){
            x = static_cast<double>(rand()) / RAND_MAX;
            sum += x;
        }
        v[i] = sum - 6;


    }

}


double Summation::Mean() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += v[i];
    }
    double mean = sum/M_;
    mean_ = mean;
    return mean;
}


double Summation::Variance() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += pow((v[i] - mean_), 2);
    }
    double variance = sum/(M_-1);
    sigma_ = sqrt(variance);
    return variance;
}


double Summation::Skewness() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f, 3);
    }
    double skewness = sum/M_;
    return skewness;
}

double Summation::Kurtosis() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f,4);
    }
    double kurtosis = sum/M_ -3;
    return kurtosis;
}
