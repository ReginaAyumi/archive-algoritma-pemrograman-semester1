#include <iostream>
#include <math.h>
using namespace std;

const int Nmaks = 100;
typedef float array[Nmaks];

int main()
{
	int i, n, j;
	float jml, sd, total, rata;
	array x;
	
	cout << "Masukkan banyaknya data: ";
	cin >> n;
	
	total = 0;
	for (i=1; i<=n; i++){
		cout << "Data ke-"<<i<<": ";
		cin >> x[i];
		total = total+x[i];
	}
	rata = total/n;
	jml = 0;
	for (j=1; j<=n; j++){
		jml = jml + pow(x[j]-rata, 2);
	}
	sd = sqrt(jml/(n-1));
	cout << "\nBanyaknya data: " <<n<<endl;
	cout << "Jumlah data: "<<total<<endl;
	cout << "Rata-rata data: "<<rata<<endl;
	cout << "Standar deviasi: "<<sd<<endl;
	return 0;
}
