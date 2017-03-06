#include <iostream>
// Program Nested For (Bentuk Segitiga)
// I.S Program Menunggu Memasukan Data
// F.S Program Menampilkan Hasil Data
using namespace std;

int main(){

	// Rumus
	// Variable Data
	int z=0;
	int i, j;
	int spaces;
	int g=10;
	string M;

	// Judul Program
	cout << "<-------------- Bentuk Segitiga --------------->" << endl << endl;

	// Program Memasukan Angka / Simbol
	cout << "Masukan Angka / Simbol : "; cin >> M ;

	// Fungsi Pengulangan For
	for (i=1; i<12; i++){
		for (spaces=g; spaces>0; spaces--){
			cout << " ";
		}
		for (j=1; j<z; j++){
			cout << M ;
		}
		cout << endl;
        // Program akan di tambah dua kali
		z+=2;
		g--;
	}
}