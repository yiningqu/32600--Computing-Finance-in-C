#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int factorial1(int x){
    int i = 1;
    int result = 1;
    while (i <= x){
        result *= i;
        i++;
    }
    return result;
}

int factorial2(int x){
    int result = 1;
    for (int i = 1; i <= x; ++i){
        result *= i;
    }
    return result;
}

bool IsPrime(int x){
    int i = 2;
    while(i<x){
        if (x % i == 0) return false;
        ++i;
    }
    return true;
}



int main() {
    int x;
    int y;
    cin >> y;
//    int result = factorial2(x);
    bool result2 = IsPrime(y);
    cout << "Result is:" << result2 << endl;
}
