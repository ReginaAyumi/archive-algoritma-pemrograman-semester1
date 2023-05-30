#include <iostream>
using namespace std;

int main()
{
	int a, b, weekday, i, day;
	weekday = 7;
	
	cout << "Input the number of days in a month = ";
	cin >> a;
	cout << "Input the start day (1=monday..) = ";
	cin >> b;
	
	cout << "\n================================="<<endl;
	cout << "Mo   Tu   We   Th   Fr   Sa   Su\n";

	for (i=2; i<=b; i++){
		cout << "     ";
	}
	
	for (day=1; day<=a; day++){
		if (day<=9){
			cout << "0" << day;
		} else {
		cout << day;
		}
		if ((day+weekday+b-1)%7 > 0){
			cout << "   ";
		} else {
			cout << "\n";
		}
	}
	cout << "\n================================="<<endl;
	return 0;
}

