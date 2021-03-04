#pragma once
#include <iostream>
#include <string>
using namespace std;
class MyClass
{
	double a;

public:
	MyClass();
	MyClass(double);
	MyClass operator/(MyClass&);
	MyClass operator*(MyClass&);
	MyClass operator-(MyClass&);
	MyClass operator-(double);
	MyClass operator-();

	double getA();
};
