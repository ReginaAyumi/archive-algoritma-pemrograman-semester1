#include <iostream>
using namespace std;

int main ()
{
	int i, n;
	float sum;
	
	cout << "Calculate the sum of the following series: S = 1-1/2+1/4-1/6+1/8-1/10+1/12-..."<<endl<<endl;
	cout << "The number of terms = ";
	cin >> n;

	double s = 0;
	for (i=2; i<=n; i++){
		if (i%2 == 0){
			s -= (double) 1/(2*(i-1));
		} else {
			s += (double) 1/(2*(i-1));
		}
	}
	sum = 1 + s;
	cout << "S = " << sum;
	return 0;
}
