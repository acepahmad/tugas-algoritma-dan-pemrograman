#include <iostream>
using namespace std;
//Program Modular
//I.S Program Menginput Data
//F.S Program Menampilkan Data

//Modular
int TAMBAH(int x, int y){
    return x  + y; 
}
int KURANG(int x, int y){
    return x  - y; 
}
int KALI(int x, int y){
    return x  * y; 
}
int BAGI(int x, int y){
    return x  / y; 
}

int main () {
	//Kamus
	int a, b;

	//Program Input
	cout << "Masukan Angka 1 : ";
	cin >> a;
	cout << "Masukan Angka 2 : ";
	cin >> b;

	//Memuncul kan hasil dari Modular Tambah
	cout << a << " + " << b << " = " << TAMBAH(a, b) << endl;
	//Memuncul kan hasil dari Modular Kurang
	cout << a << " - " << b << " = " << KURANG(a, b) << endl;
	//Memuncul kan hasil dari Modular Kali
	cout << a << " x " << b << " = " << KALI(a, b) << endl;
	//Memuncul kan hasil dari Modular Bagi
	cout << a << " : " << b << " = " << BAGI(a, b);
}

