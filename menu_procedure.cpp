#include <iostream>
#include <iomanip>
using namespace std;

void menu(int number);

int main ()
{
	int num; 
	char again;
	
	do{
	cout << "\n   Choose Your Menu"<<endl;
	cout << "  ------------------"<<endl;
	cout << "    1. Fibonacci    "<<endl;
	cout << "    2. Savings      "<< endl;
	cout << "    3. Permutation  "<< endl;
	cout << "  ------------------"<<endl;
	cout << "\nMenu = ";
	cin >> num;
	menu(num);
	
	cout <<endl<<endl<< "Choose menu again? (y/n) = ";
	cin >> again;
	} while (again == 'y');
	cout << "\nThank You"<<endl;
	return 0;
}

void menu(int number)
{
	switch(number)
	{
		case 1 :
			int no1, no2, y;
			cout << "Program to Display All Fibonacci Numbers Less than 300"<<endl<<endl;
			no1 = 0;
			no2 = 1;
			for (int i=0; (no1+no2)<300; i++)
			{
				if(i<=1){
					cout << i <<" ";
				} else {
					y = no1+no2;
					no1 = no2;
					no2 = y;
					cout << y << " ";
				}
			}
			break;
			
		case 2 :
			int i;
			float money, comp;
			money = 9000000;
			comp = 0.13;
			cout << "Program to Displays Dani's Money Value for 10 Years"<<endl;
			cout << "Dani saves 9 million and every year earns 13% compound interest."<<endl<<endl;
			for (i=1; i<=10; i++)
			{
				money = money + (money*comp);
				std::cout << std::setprecision(10) << "Year "<<i<< " = "<<money<<endl;
			}
			break;
			
		case 3 :
			void factorial(int number, int *fact);
			int N, R, P;
			int n, p;
			int c;
			cout << "Program to Calculate R Permutation of N Objects "<<endl<<endl;
	
			cout << "Input n = ";
			cin >> N;
			cout << "Input r = ";
			cin >> R;
			P = N-R;
					
			factorial(N, &n);
			factorial(P, &p);
					
			c = n/p;
			cout << "\nP(n, r) = n!/(n-r)! = " << c <<endl;
			break;
		default :
			cout << "Program does not exist"<<endl;
	}
}

void factorial(int number, int *fact)
{
	int i;
	*fact=1;		
	for (i=1; i<=number; i++){
		*fact *= i;
	}
}
