#include <iostream>
using namespace std;

int main()
{
	int i, diff;
	int hh, mm, ss, total[i];
	int hour, minute, second, remainder;
	
	cout << "Program to find the duration difference in hh:mm:ss" <<endl;
	for (i=1; i<=2; i++){
		cout << "\n" << i <<endl;
		cout << "Input hours = ";
		cin >> hh;
		cout << "Input minutes = ";
		cin >> mm;
		cout << "Input seconds = ";
		cin >> ss;
		total[i] = (hh*3600)+(mm*60)+ss;
	}
	diff = total[2] - total[1];
	
	if (diff<=60){
		cout << "\nThe duration difference = " <<diff<< " seconds" << endl;
	} else if (diff > 60) {
		hour = diff/3600;
		remainder = diff%3600;
		minute = remainder/60;
		second = remainder%60;
		cout << "\nThe duration difference = " <<hour<<":"<<minute<<":"<<second<< endl;
	}
	return 0;
}


