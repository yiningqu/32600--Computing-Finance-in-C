#include "Option.h"
#include "EuropeanPut.h"
#include "EuropeanCall.h"
#include <vector>
using std::vector;


//Option*  means pointer to class Option
//vector<>& means reference: 不会是改变copy
double PortfolioValue(const vector<Option*>& options){
    //for each option in calls price it
    //add price to sum
    // return sum
}