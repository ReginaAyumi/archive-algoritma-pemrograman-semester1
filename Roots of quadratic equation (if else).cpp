#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int a, b, c, d;
	float roots, x1, x2;
	
	cout << "Calculate the roots of a quadratic equation: ax^2 + bx + c = 0" << endl;
	cout << endl;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	
	d = (b*b)-(4*a*c);
	if (d==0){
		cout << "The roots are the same" << endl;
		roots = (-b)/2*a;
		cout << "Roots = " << roots;
	} else if (d>0){
		cout << "The roots are real and different" << endl;
		x1 = ((-b) + sqrt(d))/2*a;
		x2 = ((-b) - sqrt(d))/2*a;
		cout << "Roots = " << x1 << " and " << x2;
	} else if (d<0){
		cout << "The roots are imaginery" << endl;
		x1 = ((-b)/2*a) + (sqrt(-d)/2*a);
		x2 = ((-b)/2*a) - (sqrt(-d)/2*a);
		cout << "Roots = " << x1 << " and " << x2;
	}
	return 0;
}
