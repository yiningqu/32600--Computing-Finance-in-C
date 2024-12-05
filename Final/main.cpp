#include <iostream>
#include "Algorithms.h"
#include "BoxMuller.h"
#include "Summation.h"
#include "Polar.h"
#include <cmath>
#include <ctime>
#include <random>
using std::cout;
using std::endl;



int main() {
    srand(42);
    int M_1 = 1000;
    int M_2 = 10000;
    int M_3 = 100000;
    BoxMuller arr1(M_1);
    arr1.Generator();
    BoxMuller arr2(M_2);
    arr2.Generator();
    BoxMuller arr3(M_3);
    arr3.Generator();
    cout << "Box-Muller, M = " << M_1 << ", Mean = " << arr1.Mean() << ", Variance = " << arr1.Variance() << ", Skewness = " << arr1.Skewness() << ", Kurtosis = " << arr1.Kurtosis() << endl;
    cout << "Box-Muller, M = " << M_2 << ", Mean = " << arr2.Mean() << ", Variance = " << arr2.Variance() << ", Skewness = " << arr2.Skewness() << ", Kurtosis = " << arr2.Kurtosis() << endl;
    cout << "Box-Muller, M = " << M_3 << ", Mean = " << arr3.Mean() << ", Variance = " << arr3.Variance() << ", Skewness = " << arr3.Skewness() << ", Kurtosis = " << arr3.Kurtosis() << endl;


    Summation arr_m1(M_1);
    arr_m1.Generator();
    Summation arr_m2(M_2);
    arr_m2.Generator();
    Summation arr_m3(M_3);
    arr_m3.Generator();
    cout << "Summation, M = " << M_1 << ", Mean = " << arr_m1.Mean() << ", Variance = " << arr_m1.Variance() << ", Skewness = " << arr_m1.Skewness() << ", Kurtosis = " << arr_m1.Kurtosis() << endl;
    cout << "Summation, M = " << M_2 << ", Mean = " << arr_m2.Mean() << ", Variance = " << arr_m2.Variance() << ", Skewness = " << arr_m2.Skewness() << ", Kurtosis = " << arr_m2.Kurtosis() << endl;
    cout << "Summation, M = " << M_3 << ", Mean = " << arr_m3.Mean() << ", Variance = " << arr_m3.Variance() << ", Skewness = " << arr_m3.Skewness() << ", Kurtosis = " << arr_m3.Kurtosis() << endl;




    Polar arr_p1(M_1);
    arr_p1.Generator();
    Polar arr_p2(M_2);
    arr_p2.Generator();
    Polar arr_p3(M_3);
    arr_p3.Generator();
    cout << "Polar, M = " << M_1 << ", Mean = " << arr_p1.Mean() << ", Variance = " << arr_p1.Variance() << ", Skewness = " << arr_p1.Skewness() << ", Kurtosis = " << arr_p1.Kurtosis() << endl;
    cout << "Polar, M = " << M_2 << ", Mean = " << arr_p2.Mean() << ", Variance = " << arr_p2.Variance() << ", Skewness = " << arr_p2.Skewness() << ", Kurtosis = " << arr_p2.Kurtosis() << endl;
    cout << "Polar, M = " << M_3 << ", Mean = " << arr_p3.Mean() << ", Variance = " << arr_p3.Variance() << ", Skewness = " << arr_p3.Skewness() << ", Kurtosis = " << arr_p3.Kurtosis() << endl;





}
