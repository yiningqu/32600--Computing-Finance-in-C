#include "Employee.h"

#include <iostream>

Employee::Employee(string name, string email, string job)
	: Person(name, email),  //直接用 base class的加上自己的
	job_(job)
{
	name_;
}

string Employee::GetJob()
{
	return job_;
}