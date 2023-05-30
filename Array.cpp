//Program mencari rata2 menggunakan ARRAY

#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void CetakLarik(LarikInt A, int N);
void HitungRataRata(LarikInt A, int N, float *u);

int main()
{
	LarikInt A;
	int N;
	float u;
	
	cout << "Berapa Jumlah Data N? = "; 
	cin >> N;
	cout << "\nInput data: "<<endl;
	BacaLarik(A, N);
	cout << "\nCetak data: ";
	CetakLarik(A, N);
	cout << "\n\nHitung Rata-Rata: ";
	HitungRataRata(A, N, &u);
	cout << "\nRata-Rata Data = "<< u << endl;
	return 0;
}

void BacaLarik(LarikInt A, int N)
{
	int i;
	for(i=1; i<=N; i++){
		cout << "Input data A"<<i<<" = ";
		cin >> A[i];
	}
}

void CetakLarik(LarikInt A, int N)
{
	int i;
	for (i=1; i<=N; i++){
		cout << A[i]<<"  ";
	}
}

void HitungRataRata(LarikInt A, int N, float *u)
{
	int i, k=0;
	for(i=1; i<=N; i++){
		k= k+A[i];
	}
	*u=k/N;
}
