#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140169";
	mhs1.nama = "Rifqi";
	mhs1.alamat = "Jogja";
	mhs1.umur = 19;

	cout << "Masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;

	
}