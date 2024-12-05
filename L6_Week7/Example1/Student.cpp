#include "Student.h"

#include <iostream>
using std::cout;
using std::endl;

Student::Student(int name, int email, int major)
    : Person(name, email), major_(major)
{
}

string Student::GetMajor() {
    return major_;
}