#include "MyClass.h"

MyClass::MyClass()
{
	a = 0;
}

MyClass::MyClass(double a)
{
	this->a = a;
}

MyClass MyClass::operator/(MyClass& myclass)
{
	MyClass temp( this->getA() / myclass.getA());
	return temp;
}

MyClass MyClass::operator*(MyClass& myclass)
{
	MyClass temp(this->getA() * myclass.getA());
	return temp;
}

MyClass MyClass::operator-(MyClass& myclass)
{
	MyClass temp(this->getA() - myclass.getA());
	return temp;
}

MyClass MyClass::operator-(double b)
{
	MyClass temp(this->getA() - b);
	return temp;
}

MyClass MyClass::operator-()
{
	MyClass temp(this->getA() * (-1));
	return temp;
}

double MyClass::getA()
{
	return a;
}

