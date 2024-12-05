#include <iostream>
#include "Add.h"


using std::cout;
using std::endl;

int TestAddFunction(int x, int y, int z){
    if (Add(x,y) == z){
        cout << "pass" << endl;
    }
    else{
        cout << "fail" << endl;
    }
    cout << Add(x,y) << endl;
}

int main(){
    TestAddFunction(1,2,3);
}
