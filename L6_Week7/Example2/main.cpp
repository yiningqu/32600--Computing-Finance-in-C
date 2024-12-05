#include <iostream>
#include "Derived1.h"

int main()
{
//    Derived1 d1;
//    d1.Fun3();
//
//    Base1* b = new Derived1();
//    delete b;
////    Derived1 d1;
//
//    d1.Fun1();
//
//    d1.Fun2();
//
//    d1.Fun3();
    Base1* base = new Derived1();
    base -> Fun1();
}
