#include <iostream>
#include <math.h>
#include <iomanip.h>
using namespace std; 



int main()
{
	int thu;
     cout << " Nhap vao thu trong tuan : ";
     cin >> thu;
	if (thu == 1)
	{
		cout << " Sunday !!! \n";
	}
	else if (thu == 2)
	{
		cout << " Monday ";
	}
	else if (thu == 3)
	{
		cout << " Tuesday ";
	}
	else if (thu == 4)
	{
		cout << " Wednesday ";
	}
	else if (thu == 5)
	{
		cout << " Thursday ";
	}
	else if (thu == 6)
	{
		cout << " Friday ";
	}
	else if (thu == 7)
	{
		cout << " Saturday ";
	}
	else 
	{
		cout << " thu khong hop le -- Moi ban nhap lai !!! \n";
	}
	return 0;
}






