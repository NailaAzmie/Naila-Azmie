#include <iostream>
using namespace std;

int fungsi (){
	int a, b;
	cout << "Masukkan angka pertama : ";
	cin >> a ;
	cout << endl ;
	cout << "Masukkan angka kedua : ";
	cin >> b ;
	cout << endl ;
	cout << "Hasil dari perkaliannya = " ;
	return a * b;
}

int main (){
	cout << fungsi ();
}
