#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float i, money=5000000;
	
	for (i=1; i<=8; i++){
		money = money + (money*0.07);
		std::cout << std::setprecision(10) << "Year "<<i<< " money = "<<money<<endl;
	}
	return 0;
}
