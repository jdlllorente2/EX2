#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x,y,z,v;
	char inputx;

	cout << "Please enter the letter of the value of the interger x: \n";
	cout << "A. 1 \n";
	cout << "B. 2 \n";
	cout << "C. Other values \n";
	cin >> inputx;

	switch (inputx)
	{
		case 'a':
		case 'A':
		cout << "What is the value of integer y? \n";
		cin >> y;

		if ((5>y) > 1)
		{
	x=1;
	z=2.5;
	v=x+(y/z);
	cout << "v = " << setprecision(2) << fixed << v;
	std :: cout << std::setw(10);
	break;
}

		case 'b':
		case 'B':
		cout << "What is the value of integer y? \n";
		cin >> y;

		if (y <=5)
		{
	x=2;
	z=2.5;
	v=fabs(x-y)/z;
	cout << "v = " << setprecision(2) << fixed << v;
	std :: cout << std::setw(10);
	break;
}

	else if (y > 5)
{
	x=2;
	z=2.5;
	v=x-sqrt(y+z);
	cout << "v = " << setprecision(2) << fixed << v;
	std :: cout << std::setw(10);
	break;

}

case 'c':
		case 'C':
		{
			z=2.5;
			cout << "What is the value of integer x? \n";
			cin >> x;
			cout << "What is the value of integer y? \n";
			cin >> y;
			v=x+y+z;
	cout << "v = " << setprecision(2) << fixed << v;
	std :: cout << std::setw(10);
	break;
}
		

	}
	_getch();
	return 0;
}
