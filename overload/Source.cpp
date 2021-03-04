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
	double a, b, c;
	cin >> a >> b >> c;

	MyClass aa(a), bb(b), cc(c);

	MyClass e = Func<MyClass>(aa, bb, cc);

	double pressF = Func<double>(a, b, c);
	
	cout << "Result double: " << pressF << endl;
	cout << "Result MyclASS: " << e.getA() << endl;
	return 0;
}
