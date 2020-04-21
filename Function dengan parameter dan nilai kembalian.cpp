#include <iostream>
using namespace std;

int pembagian (int a, int b){
	return a / b;
}

int main (){
	int a, b;
	cout << "Masukkan angka pertama : ";
	cin >> a ;
	cout << endl ;
	cout << "Masukkan angka kedua : ";
	cin >> b ;
	cout << endl ;
	cout << "Hasil dari pembagiannya = " ;
	cout << pembagian (a , b);
}
