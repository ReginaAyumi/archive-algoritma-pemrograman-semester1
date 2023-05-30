#include <iostream>
using namespace std;

int fib(int i) {
	int y;
	if (i <= 1){
		return i;
	}
	y = fib(i-1)+ fib(i-2);
	return y;
}

int main ()
{
	int i;
	cout << "Program to Display All Fibonacci Numbers Less than 300"<<endl<<endl;
	for(i=0; fib(i)<300; i++){
		cout << fib(i) << " ";
	}
	return 0;
}
