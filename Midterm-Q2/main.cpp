#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;
using std::string;

double Findroot(int N, double error){
    double x_1 = 0;
    double x_2 = 1;
    double x_3 = x_2 - ((x_2*x_2*x_2 + x_2 -1 )*(x_2 - x_1))/((x_2*x_2*x_2 + x_2 -1 ) - (x_1*x_1*x_1 + x_1 -1 ));
    int i = 1;
    while(std::abs(x_3 - x_2) > error && i < N){
        double temp2 = x_3;
        double temp1 = x_2;
        x_3 = x_3 - ((x_3*x_3*x_3 + x_3 -1 )*(x_3 - x_2))/((x_3*x_3*x_3 + x_3 -1 ) - (x_2*x_2*x_2 + x_2 -1 ));
        x_1 = temp1;
        x_2 = temp2;
        i += 1;
    }
    return x_3;
}





int main() {
    int N = 10;
    double error = 0.0001;
    double result = Findroot(N,error);
    cout << result << endl;
}