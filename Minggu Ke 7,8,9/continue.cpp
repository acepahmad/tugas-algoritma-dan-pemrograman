#include <iostream>
using namespace std;
// Program Fungsi Continue
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	// Variable Data
	int a, b ,c, d, i;
	// Program Memasukan data
	cout << "Ingin berapa kali pengulangan? " << endl;
	cin >> d;
	for(i = 0; i < d; i++){

				cout << "\nMasukan 2 angka: \n";
				cin >> a >> b ;
				//continue;
				if (b == 0) {
					cout << "\nAngka ke dua tidak boleh 0.";
				} else {
					c = a/b;
					cout << "\nAngka 1 / Angka 2 = " << c << "\n" ;
				}
	}
	// Akhir Program
	return 0;
}