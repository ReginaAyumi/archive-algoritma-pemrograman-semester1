#include <iostream>
using namespace std;

int main()
{
	int c;
	
	cout << "Display all odd numbers between 1 and 100 that are not divisible by 7" << endl<<endl;
	
	for(c=1;c<100;c++){
		if (c%2!=0){
			if (c%7!=0){
				cout << c << " ";
			}
		}
	}
	return 0;
}
