#include "Polar.h"
#include <cstdlib>
#include <cmath>
#include <random>


Polar::Polar(unsigned long M)
        : M_(M)
{}

void Polar::Generator(){
    v.reserve(M_);
    for (int i = 0; i < M_ ; ++ i){
        double x,y,s;
        do{
            x = static_cast<double>(rand()) / RAND_MAX; // don't know uniform distribution (-1,1)
            y = static_cast<double>(rand()) / RAND_MAX;
            s = pow(x,2) + pow(y,2);
        }while(s >= 1 or s <= 0);

        double z = x * sqrt(-2*log(s));
        v[i] = z;
    }

}


double Polar::Mean() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += v[i];
    }
    double mean = sum/M_;
    mean_ = mean;
    return mean;
}


double Polar::Variance() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += pow((v[i] - mean_), 2);
    }
    double variance = sum/(M_-1);
    sigma_ = sqrt(variance);
    return variance;
}


double Polar::Skewness() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f, 3);
    }
    double skewness = sum/M_;
    return skewness;
}

double Polar::Kurtosis() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f,4);
    }
    double kurtosis = sum/M_ -3;
    return kurtosis;
}
