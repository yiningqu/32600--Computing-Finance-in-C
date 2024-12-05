#ifndef L3_CIRCLEEXAMPLE_RECTANGLE_H
#define L3_CIRCLEEXAMPLE_RECTANGLE_H
class Rectangle{
public:
    Rectangle();
    Rectangle(int length, int width);
    int GetLength();
    int GetWidth();
    void SetLength(int length);
    void SetWidth(int width);
    double GetArea();
    double GetCircumsference();
private:
    int length_;
    int width_;
};
#endif //L3_CIRCLEEXAMPLE_RECTANGLE_H
