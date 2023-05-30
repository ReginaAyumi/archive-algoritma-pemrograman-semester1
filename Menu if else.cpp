#include <iostream>
using namespace std;

int main()
{
	int menu, price, price2, total;
	char more;
	
	cout << "Choose Your Menu\n";
	cout << "================\n";
	cout << "1. Meatball\n";
	cout << "2. Chicken Noodle\n";
	cout << "3. Fried Chicken\n";
	cout << "4. Fried Rice\n";
	cout << "================\n";
	cout << endl;
	cout << "My Menu [1..4] = ";
	cin >> menu;
	
	if (menu == 1){
		price = 15000;
	} else if (menu == 2){
		price = 12000;
	} else if (menu == 3){
		price = 7500;
	} else if (menu == 4){
		price = 14000;
	}
	cout << "The price is " << price << endl;
	cout << "=======================\n";
	cout << "Do you want to order more? (y for yes and n for no) = ";
	cin >> more;
	cout << "=======================\n";
    if (more == 'y'){
		cout << "Choose your menu again [1..4] = ";
		cin >> menu;
		cout << "The price is " << price << endl;
	} else if  (more == 'n'){
		cout << "Thanks for your order";
	} 
	cout << "=======================\n";
	cout << "The total price is Rp"<< total;
}
