#include "Rectangle.h"

Rectangle::Rectangle()
    :length_(0),
    width_(0)
{
}
Rectangle::Rectangle(int length, int width)
    :length_(length),
    width_(width)
{
}

int Rectangle::GetLength(){
    return length_;
}

int Rectangle::GetWidth(){
    return width_;
}

void Rectangle::SetLength(int length){
    length_ = length;
}

void Rectangle::SetWidth(int width){
    width_ = width;
}

double Rectangle::GetArea(){
    return width_ * length_;
}
double Rectangle::GetCircumsference(){
    return (width_ + length_)*2;
}