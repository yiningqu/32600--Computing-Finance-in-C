//
// Created by 屈怡宁 on 1/19/24.
//

#ifndef L3_CIRCLEEXAMPLE_CIRCLE_H
#define L3_CIRCLEEXAMPLE_CIRCLE_H


class Circle{
public:
    Circle();
    Circle(int radius);
    int GetRadius();
    void SetRadius(int radius);
    double GetArea();
    double GetCircumference();
private:
    int radius_;
};



#endif //L3_CIRCLEEXAMPLE_CIRCLE_H
