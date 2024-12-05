#include <iostream>


void fib(int* arr, int N){
    //记住：array需要用pointer来point to 才能在function里运行
    //因为需要point to array's first 这样 才能改变array里面的数字
    // N已经是constant variable了所以不需要change
    arr[0] = 0; // arr[0] == *(arr+0)
    arr[1] = 1;
    for (int i = 2; i < N; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
}





int main() {
    int f0 = 0;
    int f1 = 1;

//    int N = 10;
//    int arr[N];  这样子写并不能work，因为arr需要fixed number of elements
    const int N = 10;
    int arr[N];
    fib(arr, N);   //Here: arr is an address to the first element
    //必须pass the size of array
    std::cout << arr[9] << std::endl;
}
