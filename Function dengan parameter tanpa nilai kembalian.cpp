#include <iostream>
using namespace std;

void penjumlahan (int a, int b){
	cout << (a + b);
}

int main (){
	int a, b;
	cout << "Masukkan angka pertama : ";
	cin >> a ;
	cout << endl ;
	cout << "Masukkan angka kedua : ";
	cin >> b ;
	cout << endl ;
	cout << "Hasil dari penjumlahannya = ";
	penjumlahan (a, b);
	
}
