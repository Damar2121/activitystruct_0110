#include<iostream>
#include <string>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomoer Mahasiswa = ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa = ";
	getline(cin, mhs.nama);
	cout << "Alamat Mahasiswa = " << endl;