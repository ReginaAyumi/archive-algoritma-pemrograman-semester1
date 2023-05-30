#include <iostream>
using namespace std;

int main()
{
	int i, n, x;
	int nx = 0; //amount of even numbers
	
	cout << "Input the number of data: ";
	cin >> n;
	
	for (i=1; i<=n; i++){
		cout << "Data "<<i<< ": ";
		cin >> x;
		if (x%2==0){
			nx = nx+1;
		}
	}
	cout << "The amount of even number entered in the data is " << nx;
	return 0;
}
