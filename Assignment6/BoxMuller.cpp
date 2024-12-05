#include "BoxMuller.h"
#include <cstdlib>
#include <cmath>

double BoxMuller(){
    double x, y;
    do {
        x = static_cast<double>(rand()) / RAND_MAX;
    } while (x == 0); //一定要加，因为x和y不能等于0

    do {
        y = static_cast<double>(rand()) / RAND_MAX;
    } while (y == 0);

    double z = sqrt(-2.0*log(x)) * cos(2*PI*y);

    return z;
}