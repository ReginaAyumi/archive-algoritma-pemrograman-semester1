#include <iostream>
using namespace std;

void combination(int N, int R, int P);

int main()
{
	int N, R, P;
	
	cout << "Program to calculate the r combination of n objects"<<endl<<endl;
	cout << "Input n = ";
	cin >> N;
	cout << "Input r = ";
	cin >> R;
	P = N-R;
	
	combination(N, R, P);
	return 0;
}

void combination(int N, int R, int P)
{
	int n, r, p;
	int c;
	int i;

	for (i=1; i<=N; i++)
	{
		n *= i;
	}
	for (i=1; i<=R; i++)
	{
		r *= i;
	}
	for (i=1; i<=P; i++)
	{
		p *= i;
	}
	c = n/(r*p);
	cout << "\nC(n, r) = n!/(r!*(n-r)!) = " << c <<endl;
}
