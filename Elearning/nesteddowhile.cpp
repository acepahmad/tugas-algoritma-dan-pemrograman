#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	int a = 1, b = 2000;
    cout << "<--------------- Program Perekrutan Orang -------------->" << endl;
	 //Melakukan Perulangan Di dalam Perulangan
	do {
		do {
			cout << "Tahun "<< b << " = " << a << " Orang" << endl;
			b++;
		}
		while (b < 60);
		a+=3;
		
	} 
	while(a < 60);

	

	//Perintah mengakhiri program
	return 0;
}