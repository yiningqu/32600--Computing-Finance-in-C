#include "circle.h"
#include <cmath>

Circle::Circle()
    :radius_(0)
{
}
Circle::Circle(int radius)
    :radius_(radius)
{
}

int Circle::GetRadius() {
    return radius_;
}

void Circle::SetRadius(int radius) {
    radius_ = radius;
}

double Circle::GetArea() {
    return radius_ * radius_ * M_PI;
}

double Circle::GetCircumference() {
    return  radius_ * 2 * M_PI;
}