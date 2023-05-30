#include <iostream>
using namespace std;

void factorial(int number, int *fact);

int main()
{
	int N, R, P;
	int n, r, p, c;
	
	cout << "Program to calculate the r combination of n objects"<<endl<<endl;
	cout << "Input n = ";
	cin >> N;
	cout << "Input r = ";
	cin >> R;
	P = N-R;
	
	factorial(N, &n);
	factorial(R, &r);
	factorial(P, &p);
	
	c = n/(r*p);
	cout << "\nC(n, r) = n!/(r!*(n-r)!) = " << c <<endl;
	return 0;
}

void factorial(int number, int *fact) {
	int i;
	*fact=1;
	for (i=1; i<=number; i++){
		*fact *= i;
	}
}
