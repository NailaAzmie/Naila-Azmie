#include <iostream>
using namespace std ;

int contoh_function()
{
	int a = 100;
	return a ;
}

int main ()
{
	int a = 50 ;
	cout << "Ini adalah variable lokal dari fungsi utama " << a << endl ;
	cout << "Ini adalah variable lokal dari contoh function " << contoh_function() ;
	cout << endl;
}
