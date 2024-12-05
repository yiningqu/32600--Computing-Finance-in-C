#include "Algorithms.h"


double Algorithms::Mean() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += v[i];
    }
    double mean = sum/M_;
    return mean;
}

double Algorithms::Variance() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += pow((v[i] - mean_), 2);
    }
    double variance = sum/(M_-1);
    sigma_ = sqrt(variance);
    return variance;
}

double Algorithms::Skewness() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f, 3);
    }
    double skewness = sum/M_;
    return skewness;
}


double Algorithms::Kurtosis() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f,4);
    }
    double kurtosis = sum/M_ -3;
    return kurtosis;
}

