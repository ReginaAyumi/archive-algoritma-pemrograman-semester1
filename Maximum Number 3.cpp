#include <iostream>
using namespace std;

int main()
{
	int A, B, C, max;
	
	cout << "Find the Largest of Three Integers" << endl;
	cout << "Input A: ";
	cin >> A;
	cout << "Input B: ";
	cin >> B;
	cout << "Input C: ";
	cin >> C;
	
	if (A>B) 
	if (A>C)
	max = A;
	else
	if (B>A)
	if (B>C)
	max = B;
	else
	max = C;
	
	cout << "The largest number is " << max << endl;
	return 0;
}
