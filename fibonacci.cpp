#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	int x, bil1=0, bil2=1, y;
	
	cout<<"barisan fibonacci\n";
	cout<<"==================\n";
	cout<<"Masukkan berapa baris yang kamu mau: \n";
	cin>>x;
	
	for (int n=1;n<=x;++n){
		//baris pertama
		if(n==1){
			cout<<" "<<bil1<<" ";
			continue;
		}
		if(n==2){
			cout<<bil2<<" ";
			continue;
		}
		y=bil1+bil2;
		bil1=bil2;
		bil2=y;
		//deret selanjutnya
		cout<<y<<" ";
	}
	return 0;
}



