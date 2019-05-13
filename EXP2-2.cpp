#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

int main()
{
	double const consumption = 1.10;
	int const latefee = 20;
	double water, total, unpaid;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input your water consumption (per galoon): \n";
	cin >> water;
	cout << "Please input your unpaid balance: \n";
	cin >> unpaid;

	if (unpaid > 0)
	{
	total = (water*consumption) + 35 + unpaid + latefee;
	cout << "Your total water bill is Php" << total <<endl;
	}

	else
	{
	total = (water*consumption) + 35;
	cout << "Your total water bill is Php" << total <<endl;
	}
	_getch();
	return 0;
}
