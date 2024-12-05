#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;



double Find_sqrt(int S){
    double x_n = S / 2;
    double x_next = 0.5 * (x_n + S/x_n);

    while(std::abs(x_n - x_next) > 1e-6){
        x_n = x_next;
        x_next = 0.5 * (x_next + S/x_next);
    }
    return x_next;
}



int main() {
    int x;
    cin >> x;
    double result = Find_sqrt(x);
    cout << result << endl;
}