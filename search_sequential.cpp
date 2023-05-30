#include <iostream>
using namespace std;

const int Nmax = 100;
typedef int Array[Nmax+1];

void readarray(Array A, int N);
void findindex(Array L, int N, int X, int *idx);

int main()
{
	Array A;
	int N, X;
	int idx;
	
	cout << "  PROGRAM TO SEARCH NUMBER IN ARRAY  "<<endl<<endl; // using sequential search
	cout << "How many data?: ";
	cin >> N;
	readarray(A, N);
	cout << "\nSearch number: ";
	cin >> X;
	findindex(A, N, X, &idx);
	if (idx==0){
		cout <<endl<< X <<" not found"<<endl;
	} else {
		cout <<endl<< X << " found in array index-"<<idx<<endl;
	}
	return 0;
}

void readarray(Array A, int N)
{
	int k;
	for(k=1; k<=N; k++){
		cout << "  Input data A["<<k<<"] = ";
		cin >> A[k];
	}
}

void findindex(Array L, int N, int X, int *idx)
{
	int k;
	k = 1;
	while (k<N && L[k]!=X){
		k = k+1;
	}
	if (L[k]==X){
		*idx = k;
	} else {
		*idx = 0;
	}
}

