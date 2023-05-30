#include <iostream>
using namespace std;

int main()
{
	// tipe deklarasi bentukan, pseudocode= type jam: record <dd:integer, mm:integer, ss:integer> j: jam
	typedef struct {long int hh; // jam
					long int mm; // menit
					long int ss; // detik
					} jam;
	jam j;
	long int totaldetik;
	
	//algoritma
	cout << "Jam = ";
	cin >> j.hh;
	cout << "Menit = ";
	cin >> j.mm;
	cout << "Detik = ";
	cin >> j.ss;
	
	totaldetik = (j.hh*3600)+(j.mm*60)+j.ss;
	cout << "Total Detik = " << totaldetik;
	return 0;
}
