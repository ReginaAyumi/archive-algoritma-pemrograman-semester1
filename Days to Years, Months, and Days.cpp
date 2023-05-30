#include <iostream>
using namespace std;

int main()
{
	int x, years, months, days, remainder;
	
	cout << "Convert days into years, months, and days" << endl;
	cout << "Input x: ";
	cin >> x;
	years = x/365;
	remainder = x%365;
	months = remainder/30;
	days = remainder%30;
	cout << x << " days is equal to " << years << " years, " << months << " months, and " << days << " days" << endl;
	return 0;
}
