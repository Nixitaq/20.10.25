#include <iostream>
using namespace std;

//void Sum(int a, int b)
//{
//	cout << a << "+" << b << "=" << a + b << endl;
//}
//
//void Sum(double a, double b)
//{
//	cout << a << "+" << b << "=" << a + b << endl;
//}
//
//void Sum(char a, char b)
//{
//	cout << a << "+" << b << "=" << a + b << endl;
//}


template<class T>
void Sum(T a, T b)
{
	cout << a << "+" << b << "=" << a + b << endl;
}

template<class T>
void Min(T a, T b)
{
	cout << a << "-" << b << "=" << a + b << endl;
}

template<class T>
void Umnojit(T a, T b)
{
	cout << a << "*" << b << "=" << a + b << endl;
}

template<class T>
void Podelit(T a, T b)
{
	if (b == 0)
	{
		cout << "Error";
	}
	else
	{
		cout << a << "/" << b << "=" << a + b << endl;
	}
	cout << a << "/" << b << "=" << a + b << endl;
}

int main()
{
	Sum(1, 2);
	Sum(1.5, 2.7);
	Sum('a', 'b');


	Min(1, 2);
	Min(1.5, 2.7);
	Min('a', 'b');

	Umnojit(1, 2);
	Umnojit(1.5, 2.7);
	Umnojit('a', 'b');

	Podelit(1, 2);
	Podelit(1.5, 2.7);
	Podelit('a', 'b');



}