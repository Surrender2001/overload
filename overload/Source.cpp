#include<iostream>
#include"MyClass.h"
using namespace std;

template<typename T>
T Func(T a, T b, T c)
{
	T temp( -(c*b-1));
	T temp12( (c*a) );
	T temp3( temp / temp12 );
	
	return temp3;
}

int main()
{
	double a, b, c,pressF;
	float a2, b2, c2;
	cin >> a2 >> b2 >> c2;
	pressF = Func(a2, b2, c2);
	cout << "Result double: " << pressF << endl;

	cin >> a >> b >> c;
	MyClass class1(a), class2(b), class3(c);
	MyClass e = Func(class1, class2, class3);

	
	
	
	cout << "Result Myclass: " << e.getA() << endl;
	return 0;
}
