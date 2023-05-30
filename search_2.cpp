#include <iostream>
using namespace std;

const int N = 11;
typedef int array[N+1];
void binary(array L, int N, int X, int *idx);

int main()
{
	array L;
	int X, idx;
	
	L[1] = 97;
	L[2] = 83;
	L[3] = 74;
	L[4] = 65;
	L[5] = 58;
	L[6] = 40;
	L[7] = 46;
	L[8] = 37;
	L[9] = 29;
	L[10] = 15;
	L[11] = 6;
	
	cout << "\nSearch number: ";
	cin >> X;
	binary(L, N, X, &idx);
	if (idx==0){
		cout <<endl<< X <<" not found"<<endl;
	} else {
		cout <<endl<< X << " found in array index-"<<idx<<endl;
	}
	return 0;
}

void binary(array L, int N, int X, int *idx)
{
	int i, j, k;
	bool found;
	
	i = 1;
	j = N;
	found = false;
	
	while(!found && i<=j){
		k = (i+j)/2;
		if (L[k]==X){
			found = true;
		} else {
			if (L[k]>X){
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
