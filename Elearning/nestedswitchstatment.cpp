#include <iostream>
using namespace std;
// Program Kalkulator Perkalian Sederhana
// I.S Program menunggu memasukan Angka
// F.S Program menampilkan hasil angka sesuai operasi logika

int main () {

	//Kamus
	int a, b = 25;

    // Memasukan & Menampilkan Data
	cout << "Berapakah 5 x 5 = ? " << endl;
	cout << "= ";
	cin >> a;

	// Fungsi Switch Ke-1, Jika Data Bernilai Salah Di Awal
	switch (a) {
	default : cout << "Anda Salah" << endl;
	break;
	// Fungsi Switch Ke-2, Jika Data Bernilai Benar Di Awal
	case 25: cout << "Anda Benar" << endl;
		switch (b) {
			case 25: cout << "5 x 5 = " << b << endl;
				break;
		}
}

	// Akhir Program
	return 0;
}
