#include <iostream>
using namespace std;

int main()
{
	char name, wages_class;
	int hourly_wages, work_hours, total;
	
	cout << "Calculate an employee's weekly wage" << endl;
	cout << endl;
	cout << "Input the employee name: ";
	cin >> name;
	cout << "Input the employee class: ";
	cin >> wages_class;
	cout << "Input the number of hours worked: ";
	cin >> work_hours;
	
	if ((wages_class == 'A')||(wages_class == 'a')){
		hourly_wages = 14000;
	} else if ((wages_class == 'B')||(wages_class == 'b')){
		hourly_wages = 20000;
	} else if ((wages_class == 'C')||(wages_class == 'c')){
		hourly_wages = 24000;
	} else if ((wages_class == 'D')||(wages_class == 'd')){
		hourly_wages = 30000;
	} else {
		cout << "Class not found" << endl;
	}
	
	if (work_hours <= 48){
		total = work_hours*hourly_wages;
	} else if (work_hours>48){
		total = (work_hours-48)*45000 + (hourly_wages*48);
	}
	
	cout << endl;
	cout << name << " get " << total << " weekly wages ";
	return 0;
}
