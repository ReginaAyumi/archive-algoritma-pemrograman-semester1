#include <iostream>
#include <math.h>
using namespace std;

float correlation(int x[], int y[], int n);
typedef int array[100];

int main()
{
	int i, N;
	array X, Y;

	cout << "Program to Find the Correlation Value of Two Sets of Data"<<endl<<endl;
	cout << "How many input value? = ";
	cin >> N;
	
	for(i=1; i<=N; i++){
		cout << "Data x["<<i<<"] = ";
		cin >> X[i];
	}
	cout << endl;
	for(i=1; i<=N; i++){
		cout << "Data y["<<i<<"] = ";
		cin >> Y[i];
	}
	
	cout << "\nCorrelation Value = "<<correlation(X, Y, N);
	return 0;
}

float correlation(int x[], int y[], int n)
{
	int sum_x = 0, sum_y = 0, sum_xy = 0;
	int sqrsum_x = 0, sqrsum_y = 0;
	float r;
	
	for(int i=1; i<=n; i++){
		sum_x = sum_x + x[i];
		sum_y = sum_y + y[i];
		sum_xy = sum_xy + x[i]*y[i];
		sqrsum_x = sqrsum_x + (x[i]*x[i]);
		sqrsum_y = sqrsum_y + (y[i]*y[i]);
	}
	r = (n*sum_xy - sum_x*sum_y)/(sqrt(n*sqrsum_x - pow(sum_x, 2))*sqrt(n*sqrsum_y - pow(sum_y, 2)));
	return r;
}
