#include <iostream>
using namespace std;
// Program Jadwal Keberangkatan Kereta Api
//I.S Program mengolah data
//F.S Program menampilkan data

typedef struct {

	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {

	int jam;
	int menit;
	int detik;
} jam;

typedef struct {

	int noKA;
	string KotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotatujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jadwalKA;

int main (){

  //kamus
	jadwalKA jadwalKeretaApi;

	cout << endl <<"========================Jadwal Keberangkatan Kereta Api========================" << endl << endl;

	jadwalKeretaApi.noKA = 1;
	jadwalKeretaApi.KotaAsalKA = "Bandung";
	jadwalKeretaApi.jamBerangkat.jam = 10;
	jadwalKeretaApi.jamBerangkat.menit = 30;
	jadwalKeretaApi.jamBerangkat.detik = 25;
	jadwalKeretaApi.tanggalBerangkat.hari = "Senin";
	jadwalKeretaApi.tanggalBerangkat.bulan = "Januari";
	jadwalKeretaApi.tanggalBerangkat.tahun = "2017";


	cout << "Nomer Kereta Api : " << jadwalKeretaApi.noKA << endl;
	cout << "Kota Asal : " << jadwalKeretaApi.KotaAsalKA << endl;
	cout << "Tanggal Berangkat : " << jadwalKeretaApi.tanggalBerangkat.hari << " - " << jadwalKeretaApi.tanggalBerangkat.bulan << " - " << jadwalKeretaApi.tanggalBerangkat.tahun << endl;
	cout << "Waktu Keberangkatan : " << jadwalKeretaApi.jamBerangkat.jam <<	":" << jadwalKeretaApi.jamBerangkat.menit << ":" << jadwalKeretaApi.jamBerangkat.detik << endl << endl;

	jadwalKeretaApi.kotatujuanKA = "Malang";
	jadwalKeretaApi.jamTiba.jam = 18;
	jadwalKeretaApi.jamTiba.menit = 20;
	jadwalKeretaApi.jamTiba.detik = 22;
	jadwalKeretaApi.tanggalTiba.hari = "Selasa";
	jadwalKeretaApi.tanggalTiba.bulan = "Januari";
	jadwalKeretaApi.tanggalTiba.tahun = "2017";

  cout << "=====================================================" << '\n' << endl;
	cout << "Nomer Kereta Api : " << jadwalKeretaApi.noKA << endl;
	cout << "Kota Tujuan : " << jadwalKeretaApi.kotatujuanKA << endl;
	cout << "Tanggal Berangkat : " << jadwalKeretaApi.tanggalTiba.hari << " - " << jadwalKeretaApi.tanggalTiba.bulan << " - " << jadwalKeretaApi.tanggalTiba.tahun << endl;
	cout << "Waktu Keberangkatan : " << jadwalKeretaApi.jamTiba.jam <<	":" << jadwalKeretaApi.jamTiba.menit << ":" << jadwalKeretaApi.jamTiba.detik << endl <<  endl;

	return 0;
}
