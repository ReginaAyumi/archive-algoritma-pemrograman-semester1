#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int i, length, capital = 0, lowercase = 0;
	
	cout << "Input string: ";
	getline(cin, str);
	length = str.length();
	
	for (i = 0; i < length; i++){
		if (str[i] >= 'A' && str[i] <= 'Z') {
            capital++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        }
	}
	
	cout << "\nCapital Letters: " << capital << endl;
	cout << "Lowercase Letters: " << lowercase << endl;
	return 0;
}
