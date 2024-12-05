#include <iostream>
#include "circle.h"

int main() {
    Circle c(7);
    std:: cout << "Area is: "<< c.GetArea() ;
    std:: cout << "Circumsference is: "<< c.GetCircumference() << std::endl;
}
