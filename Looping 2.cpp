#include <iostream>
using namespace std;

int main()
{
	int n, i;
	int factorial = 1;
	
	cout << "Program to calculate the factorial of an integer"<<endl<<endl;
	cout << "Input a number: ";
	cin >> n;
	
	if (n>0){
		for (i=1; i<=n; i++){
		factorial *= i;
		}
		cout << "Factorial of "<< n << " = " << factorial << endl;
	} else {
		cout << "Factorial of a negative number does not exist"<<endl;
	}	
	return 0;
}
