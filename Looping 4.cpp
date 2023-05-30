#include <iostream>
using namespace std;

int main()
{
	float i, sum;
	
	cout << "Program to calculate the sum of the following series 1/2 + 2/3 + 3/4 + ... + 99/100"<<endl<<endl;
	for (i=1; i<100; i++){
		sum += i/(i+1);
	}
	cout << "Sum = " << sum << endl;
	return 0;
}
