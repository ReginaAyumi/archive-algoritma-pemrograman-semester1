#include <iostream>
using namespace std;

const int NrowMax = 20;
const int NcolMax = 20;
typedef int MatrixInt[NrowMax+1][NcolMax+1];

void ReadMatrix(MatrixInt M, int Nrow, int Ncol);
void WriteMatrix(MatrixInt M, int Nrow, int Ncol);
void SumTwoMatrices(MatrixInt A, MatrixInt B, MatrixInt Z, int Nrow, int Ncol);

main()
{
	MatrixInt X, Y, Z;
	int p, q, z;
	
	cout << "ADDING TWO MATRICES"<<endl;
	cout << "\n Input Matrix Size:"<<endl;
	cout << "  Number of Row [1..20] = ";
	cin >> p;
	cout << "  Number of Column [1..20] = ";
	cin >> q;
	
	cout << "\n Enter the elements of the matrix X: "<<endl;
	ReadMatrix(X, p, q);
	cout << "\n Enter the elements of the matrix Y: "<<endl;
	ReadMatrix(Y, p, q);
	
	cout << "\n Print Matrix: X"<<endl;
	WriteMatrix(X, p, q);
	cout << "\n Print Matrix: Y"<<endl;
	WriteMatrix(Y, p, q);
	
	cout << "\n The sum of the X and Y matrices: "<<endl;
	SumTwoMatrices(X, Y, Z, p, q);
	WriteMatrix(Z, p, q);
	
	return 0;
}

void ReadMatrix(MatrixInt M, int Nrow, int Ncol)
{
	int i, j;
	for (i=1; i<=Nrow; i++){
		for (j=1; j<=Ncol; j++){
			cout << "  Input Element M["<< i << "]["<< j << "]: ";
			cin >> M[i][j];
		}
	}
}

void WriteMatrix(MatrixInt M, int Nrow, int Ncol)
{
	int i, j;
	for (i=1; i<=Nrow; i++){
		for (j=1; j<=Ncol; j++){
			cout << "  " << M[i][j]<< "  ";
		}
		cout << endl;
	}
}

void SumTwoMatrices(MatrixInt A, MatrixInt B, MatrixInt Z, int Nrow, int Ncol)
{
	int i, j;
	
	for (i=1; i<=Nrow; i++){
		for (j=1; j<=Ncol; j++){
			Z[i][j] = A[i][j] + B[i][j];
		}
	}
}
