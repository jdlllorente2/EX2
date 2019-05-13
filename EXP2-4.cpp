#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int count, next, num0 = 0, num1=1, n=22;


	for(count=0;count<n;count++)
	{
		if (count <= 1) 
		next=count;
		
		else
		{
			num = num0 + num1;
			num0 = num1;
			num1 = next;
	}
		cout << next << ", ";
	}
	
	_getch();
	return 0;
}
