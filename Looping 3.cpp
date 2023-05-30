#include <iostream>
using namespace std;

int main()
{
	int n, x, i, max, min, sum;
	float average;
	
	cout << "Calculate and display the average, maximum value, and minimum value from some data"<<endl<<endl;
	cout << "Input the number of data: ";
	cin >> n;

	for (i=1; i<=n; i++){
		cout << "Data "<<i<< ": ";
		cin >> x;
		sum += x;
		if (x>max){
			max = x;
		} 
		if (x<min||i==1){
			min = x;
		}
	}
	cout <<endl;
	average = sum/n;
	cout << "The average of the data = " << average << endl;
	cout << "The maximum value = " << max << endl;
	cout << "The minimum value = " << min << endl;
	return 0;
}
