#include <iostream>
using namespace std;

int factorial(int number){
	int i, fact=1;
	for (i=1; i<=number; i++){
		fact *= i;
	}
	return fact;
}

int main()
{
	int n, r, c;
	
	cout << "Program to calculate the r combination of n objects"<<endl<<endl;
	cout << "Input n = ";
	cin >> n;
	cout << "Input r = ";
	cin >> r;
	
	c = factorial(n)/(factorial(r)*factorial(n-r));
	cout << "\nC(n, r) = n!/(r!*(n-r)!) = " << c <<endl;
	return 0;
}
