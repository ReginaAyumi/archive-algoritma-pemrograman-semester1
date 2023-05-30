#include <iostream>
using namespace std;

int main()
{
	int i, x, remainder[i];
	
	cout << "Program to Convert Decimal to Binary"<<endl<<endl;
	cout << "Input decimal number = ";
	cin >> x;
	
	for (i=0; x>0; i++) {    
		remainder[i] = x%2;    
		x = x/2;  
	}    
	cout << "Binary of the given number = ";   
	
	for (i=i-1; i>=0 ;i--) {    
		cout<<remainder[i];    
	}
	return 0;
}
