#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "INFORMATICS";
	int i, length;
	
	length = str.length();
	string st(str, 0, 1);
	
	for (i=0; i<length; i++){
		if (i==0){
			cout << st << endl;
		} else {
			st = st + "-" + str[i];
			cout << st << endl;
		}
	}
	return 0;
}
