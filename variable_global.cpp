#include <iostream>
using namespace std ;

//variable global
int a = 9 ;

int function()
{
	a = 8 ;
	return a ;
}

int b = 7 ;

int function2()
{
	b= 6 ;
	return b ;
}

int c = 5 ;

int function3()
{
	c = 4 ;
	return c ;
}

int main ()
{
	cout << "Ini adalah variable global " << a << endl ;
	cout << "Ini adalah variable global dari function 1 : " << function() << endl ;
	cout << endl ;
	cout << "Ini adalah variable global " << b << endl ;
	cout << "Ini adalah variable global dari function 2 : " << function2() << endl ;
	cout << "Ini adalah variable global " << b<< endl ;
	cout << "Ini adalah variable global dari function 3 : " << function3() << endl ;

}
