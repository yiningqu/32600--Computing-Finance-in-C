#include "Student.h"
#include "Employee.h"

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Student s1("joe1", "joe1@uchicago", "math");

	Employee e1("joe2", "joe2@uchicago", "teacher");

	cout << s1.GetEmail();

	cout << e1.GetEmail();
}