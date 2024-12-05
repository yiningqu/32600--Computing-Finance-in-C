#pragma once

#include "Person.h"

#include <string>
using std::string;

class Employee : public Person //这里加上base class的名字
{
public:
	Employee(string name, string email, string job);

	string GetJob();

private:
	string job_;
};