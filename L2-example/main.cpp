#include <iostream>
#include "Increment.h"

using std::cout;
using std::endl;

int main()
{
    int x = 5;

//    const x = 5;
//    const int& refx = x; //bind a reference to constant value

    int y = 6;
    const int& refy = y;

    y = 10;  //只能用y=10来改变y,ref不能改变y


    //int& refx = x;  //declare a reference to x

    //refx = 12; //change x value using reference

    //const int& refx = x; //不能change因为是constant

    IncrementByOne(x);
    cout << "y = " << y << endl;
}
