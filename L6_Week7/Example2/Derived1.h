#pragma once

#include "Base1.h"

class Derived1 : public Base1
{
public:
    ~Derived1();

	void Fun1() override; //不写override也会自动默认override

	void Fun3();
};

