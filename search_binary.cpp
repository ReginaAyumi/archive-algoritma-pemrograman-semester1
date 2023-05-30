#include <iostream>
using namespace std;

const int Nmax = 100;
typedef int array[Nmax+1];

void readarray(array A, int N);
void binary(array A, int N, int X, int *idx);

int main()
{
	array A;
	int N, X;
	int idx;
	
	cout << "  PROGRAM TO SEARCH NUMBER IN ARRAY  "<<endl<<endl; 	// using binary search in descending order
	cout << "How many data?: ";
	cin >> N;
	readarray(A, N);
	cout << "\nSearch number: ";
	cin >> X;
	binary(A, N, X, &idx);
	if (idx==0){
		cout <<endl<< X <<" not found"<<endl;
	} else {
		cout <<endl<< X << " found in array index-"<<idx<<endl;
	}
	return 0;
}

void readarray(array A, int N)
{
	int k;
	cout << "Please input array in descending order"<<endl;
	for(k=1; k<=N; k++){
		cout << "  Input data A["<<k<<"] = ";
		cin >> A[k];
	}
}

void binary(array A, int N, int X, int *idx)
{
	int i, j, k;
	bool found;
	
	i = 1;
	j = N;
	found = false;
	
	while(!found && i<=j){
		k = (i+j)/2;
		if (A[k]==X){
			found = true;
		} else {
			if (A[k]>X){
				i = k+1;
			} else {
				j = k-1;
			}
		}
	}
	
	if(found == true){
		*idx = k;
	} else {
		*idx = 0;
	}
}
