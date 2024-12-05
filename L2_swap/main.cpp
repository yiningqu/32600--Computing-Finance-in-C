#include <iostream>

using std:: cout;
using std:: endl;


////write a function to swap values of two variables
void swap(int& a, int& b ){
    int temp = b;
    b = a;
    a = temp;
}




//pointer to address of x, pointer to address of y
void swap2(int* a, int* b){
    int pt = *b;
    *b = *a;
    *a = pt;
}




int main() {
    int x = 5;
    int y = 10;

    //这两个method都可以
//    swap(x,y);
//    swap2(&x,&y);

    cout << "Result = " << x << y << endl;
}
