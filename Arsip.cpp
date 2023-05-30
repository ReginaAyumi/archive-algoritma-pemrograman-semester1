//Program Luas Segiempat
//Membaca panjang dan lebar empat persegi panjang dari arsip "data.txt", menghitung luasnya, lalu mencetak luas tersebut ke arsip "hasil.txt"

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	float panjang;
	float lebar;
	float luas;
	
	ifstream Fin; //pembuat arsip masukan
	ofstream Fout; //peubah arsip luaran
	
	// algoritma
	
	// buka arsip masukan
	Fin.open("data.txt");
	
	// buka arsip luaran
	Fout.open("hasil.txt");
	
	// baca panjang dan lebar dari arsip Fin
	Fin >> panjang, lebar;
	
	luas = (panjang*lebar);
	
	// tulis luas segiempat ke arsip Fout
	Fout << "Luas segiempat = " << luas << endl;
	
	// tutup arsip
	Fin.close();
	Fout.close();
	return 0;
}
