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
	cout << "operator /" << temp.getA() << endl;
	return temp;
}

MyClass MyClass::operator*(MyClass& myclass)
{
	MyClass temp(this->getA() * myclass.getA());
	cout << "operator *" << temp.getA() << endl;
	return temp;
}

MyClass MyClass::operator-(MyClass& myclass)
{
	MyClass temp(this->getA() - myclass.getA());
	cout << "operator -" << temp.getA() << endl;
	return temp;
}

MyClass MyClass::operator-(double b)
{
	MyClass temp(this->getA() - b);
	cout << "operator -double" << temp.getA() << endl;
	return temp;
}

MyClass MyClass::operator-()
{
	MyClass temp(this->getA() * (-1));
	cout << "operator -u" << temp.getA() << endl;
	return temp;
}

double MyClass::getA()
{
	return a;
}

