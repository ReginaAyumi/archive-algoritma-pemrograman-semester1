#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i, n;
	float x[50], ds, step1, step2;
	
	cout << "Calculate the Standard Deviation"<<endl<<endl;
	cout << "Input the n value = ";
	cin >> n;
	cout << "Please Enter the Real Numbers upto " << n <<endl;
	
	for (i=0; i<n; i++){
		cin >> x[i];
		step1 += x[i]*x[i];
		step2 += x[i];
	}
	
	ds = sqrt(((n*step1)-(step2*step2))/(n*(n-1)));
	cout << "\nStandard Deviation = " << ds << endl;
	return 0;
}
