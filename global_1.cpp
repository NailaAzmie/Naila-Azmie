#include <iostream>
using namespace std ;

//int variable global
int x = 77 ;

contoh_function()
{
	x = 20 ;
	return x ;
}

int main ()
{
	cout << "Ini adalah variable global " << x << endl ;
	cout << "Ini adalah variable global dari contoh function " << contoh_function() ;
	cout << endl;
}
