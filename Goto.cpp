#include <iostream>
using namespace std ;

int main () {
	// program goto
	char jump = 'Z' ;
	
	cout << "Masukkan huruf 'Y' untuk melompat" << endl ;
	cout << "Masukkan huruf 'N' untuk tidak melompat" << endl ;
	cin >> jump ;
	cout << endl ;
	
	cout << "Nama saya Naila Azmie" << endl ;
	if ( jump == 'Y' ) goto lompat ;
	cout << "NIM saya ETE10190113" << endl ;
	lompat :
	cout << "Saya kuliah di Politeknik Unggulan Kalimantan" << endl ;
	
	return 0 ;
}
