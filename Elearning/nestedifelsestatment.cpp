#include <iostream>
using namespace std;
// Program Nested Else IF (Perbandingan) 
// I.S Program memasukan data
// F.S Program menampilkan Data sesuai operasi logika

int main () {
	//kamus
	int a, b;

    cout << "<-------------- Program Perbandingan --------------->" << endl << endl;
	cout << "Masukan Angka Pertama : ";
	cin >> a;
	cout << endl;

	cout << "Masukan Angka Kedua : ";
	cin >> b;
	cout << endl;
	
	//Perintah jika kondisi true (benar)
	if(a >= 0, b >= 0) {
		if(a > b) {
			cout << a << " lebih besar dari " << b << endl;
		} else if(a < b){
			cout << a << " lebih kecil dari " << b << endl;
		} else if(a = b){
			cout << a << " & " << b << " adalah angka yang sama" << endl;
		} else {
		cout << "Selain Angka Tidak Bisa di bandingkan" << endl;
		}
	} 
	// Perintah jika kondisi selain true 
	else {
		cout << "Selain Angka Tidak Bisa di bandingkan" << endl;
	}

	// Akhir Program
	return 0;
}