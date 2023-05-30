#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int a, b, c, d;
	float roots, x1, x2, r, z;
	
	cout << "Calculate the roots of a quadratic equation: ax^2 + bx + c = 0" << endl;
	cout << endl;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	
	d = (b*b)-(4*a*c);
	
	switch (d>0){
		case 1 :
			//if d is positive
			cout << "The roots are real and different" << endl;
			x1 = ((-b) + sqrt(d))/2*a;
			x2 = ((-b) - sqrt(d))/2*a;
			cout << "Roots = " << x1 << " and " << x2;
			break;
		case 0 :
			//if d is negative
			switch (d<0){
				case 1 :
					cout << "The roots are imaginery" << endl;
					r = ((-b)/2*a);
					z = (sqrt(-d)/2*a);
					cout << "x1 = " << r << " + " << z << endl;
					cout << "x2 = " << r << " - " << z << endl;
					break;
				case 0 :
					//if d is equal to 0
					cout << "The roots are the same" << endl;
					roots = (-b)/2*a;
					cout << "Roots = " << roots;
					break;
			}
	}
	return 0;
}
