#include <iostream>
using namespace std ;

//int variable global
int z = 500 ;

contoh_function()
{
	z = 9 ;
	return z ;
}

int main ()
{
	cout << "Ini adalah variable global " << z << endl ;
	cout << "Ini adalah variable global dari contoh function " << contoh_function() ;
	cout << endl;
}
