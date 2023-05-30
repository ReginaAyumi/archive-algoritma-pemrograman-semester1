#include <iostream>
using namespace std;

int main()
{
	int op1, op2;
	float result;
	int oprt;
	
	cout << "Simple Calculator"<<endl<<endl;
	cout << "Input the first number = ";
	cin >> op1;
	cout << "\nList of operator"<<endl;
	cout << "1. +" << endl;
	cout << "2. -" << endl;
	cout << "3. *" << endl;
	cout << "4. /" << endl;
	cout << "\nInput the number of operator you want to use = ";
	cin >> oprt;
	cout << "Input the second number = ";
	cin >> op2;
	
	switch (oprt){
		case 1 : {
			result = op1 + op2;
			break;
		}
		case 2 : {
			result = op1 - op2;
			break;
		}
		case 3 : {
			result = op1 * op2;
			break;
		}
		case 4 : {
			result = op1 / op2;
			break;
		}
	}
	cout << "\nThe result = " << result << endl;
	return 0;
}
