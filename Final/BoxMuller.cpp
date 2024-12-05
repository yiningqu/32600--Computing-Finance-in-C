#include "BoxMuller.h"
#include <cstdlib>
#include <cmath>

BoxMuller::BoxMuller(unsigned long M)
    : M_(M)
{}


void BoxMuller::Generator(){
    v.reserve(M_);
    for (int i = 0; i < M_ ; ++ i){
        double x, y;
        do {
            x = static_cast<double>(rand()) / RAND_MAX;
        } while (x == 0); //一定要加，因为x和y不能等于0

        do {
            y = static_cast<double>(rand()) / RAND_MAX;
        } while (y == 0);

        double z = sqrt(-2.0*log(x)) * cos(2*PI*y);
        v[i] = z;
    }

}

double BoxMuller::Mean() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += v[i];
    }
    double mean = sum/M_;
    mean_ = mean;
    return mean;
}


double BoxMuller::Variance() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        sum += pow((v[i] - mean_), 2);
    }
    double variance = sum/(M_-1);
    sigma_ = sqrt(variance);
    return variance;
}


double BoxMuller::Skewness() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f, 3);
    }
    double skewness = sum/M_;
    return skewness;
}

double BoxMuller::Kurtosis() {
    double sum = 0;
    for (int i = 0; i < M_; ++i){
        double f = (v[i] - mean_)/sigma_;
        sum += pow(f,4);
    }
    double kurtosis = sum/M_ -3;
    return kurtosis;
}
