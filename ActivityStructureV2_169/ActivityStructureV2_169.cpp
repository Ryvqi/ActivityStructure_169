#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string NIM;
	string Nama;
	AlamatDetail Alamat;
	int Umur;
};

int main() 
{
	Mahasiswa mhs;

	cout << " Masukan nim : ";
	cin >> mhs.NIM;
	cout << " Masukan nama : ";
	cin >> mhs.Nama;
	cout << "Alamat : " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.Alamat.desa;
	cout << "\tNama kota : ";
	cin >> mhs.Alamat.kota;
	cout << "Masukan umur : ";
	cin >> mhs.Umur;

	cout << "\nNim : " << mhs.NIM;
	cout << "\nNama : " << mhs.Nama;
	cout << "\ndesa : " << mhs.Alamat.desa;
	cout << "\nkota : " << mhs.Alamat.kota;
	cout << "\numur : " << mhs.Umur;
}
