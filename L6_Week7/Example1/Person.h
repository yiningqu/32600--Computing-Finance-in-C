#pragma once

#include <string>
using std::string;

class Person
{
public:
	Person(string name, string email);
	string GetName();
	string GetEmail();

protected: //derived class可以access
	string name_;
	string email_;
};