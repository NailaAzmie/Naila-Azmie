#include <iostream>
using namespace std ;

//int variable global
int y = 100 ;

contoh_function()
{
	y = 3 ;
	return y ;
}

int main ()
{
	cout << "Ini adalah variable global " << y << endl ;
	cout << "Ini adalah variable global dari contoh function " << contoh_function() ;
	cout << endl;
}
