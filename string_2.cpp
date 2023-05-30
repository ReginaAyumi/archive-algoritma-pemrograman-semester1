#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	int i, length;
	
	cout << "Input string: ";
	getline(cin, str);
	length = str.length();
	
	for (i = 0; i < length; i++){
		if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        } else if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
	}
	cout << "Output string: " << str;
	return 0;
}
