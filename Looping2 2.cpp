#include <iostream>
using namespace std;

int main()
{
	int i, c;
	float f;
	cout << "Celcius to Fahrenheit Conversion"<<endl<<endl;
	
	for (i=1; i<=10; i++){
		c = i*10;
		f = (c*9/5)+32;
		cout << c << " C ----> " << f << " F"<<endl;
	}
	return 0;
}
