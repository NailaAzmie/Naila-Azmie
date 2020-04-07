#include <iostream>
using namespace std ;

int main () {
	// program break
	int angka_awal , angka_akhir ;
	
	cout << "Masukkan angka awal : " ;
	cin >> angka_awal ;
	cout << endl ;
	cout << "Masukkan angka akhir : " ;
	cin >> angka_akhir ;
	cout << endl ;
	
	for ( int i = angka_awal ; i <= angka_akhir ; i++) {
		if ( i > 25 ) break ; 
		cout << i << endl;
	}
	return 0 ;
}
