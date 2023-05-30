#include <iostream>
#include <math.h>
using namespace std;

float root(int a, int b, int c)
{
	float x;
	x = sqrt(a*a + b*b + c*c);
	return x;
}

int main()
{
	int a, b, c;
	cout << "Program to Calculate the Square Root of (a^2 + b^2 +c^2)" <<endl<<endl;
	cout << "Input a = ";
	cin >> a;
	cout << "Input b = ";
	cin >> b;
	cout << "Input c = ";
	cin >> c;
	
	cout << "\nResult = "<< root(a, b, c);
	return 0;
}
