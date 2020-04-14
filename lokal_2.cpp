#include <iostream>
using namespace std ;

int contoh_function()
{
	int n = 22 ;
	return n ;
}

int main ()
{
	int n = 55 ;
	cout << "Ini adalah variable lokal dari fungsi utama " << n << endl ;
	cout << "Ini adalah variable lokal dari contoh function " << contoh_function() ;
	cout << endl;
}
