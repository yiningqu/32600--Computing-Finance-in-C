#include <iostream>


void BubbleSort(int* arr, int N){
    for (int i = 0; i < N - 1; i++){
        for (int j = 0; j < N-1-i; j++)
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    }
}



int main() {
    const int N = 10;
    int arr[N] {82,2,53,7,10,6,15,4,32,13};
    BubbleSort(arr, N);
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << ' ';
    }
}
