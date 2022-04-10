#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main()
{

	int current_d;
	int current_m;
	int current_y;

	int birth_d;
	int birth_m;
	int birth_y;

	cout << "enter the current data  " << endl;
	cin >> current_d>> current_m >> current_y;

	cout << "enter the date of birth \n  " << endl;
	cin >> birth_d>> birth_m >> birth_y;

	if (birth_d > current_d)
	{
		current_d = current_d + 29;

		current_m = current_m - 1;
	}

	if (birth_m > current_m)
	{

		current_y = current_y - 1;
		current_m = current_m + 12;


	}


	int calculated_d = current_d - birth_d;
	int calculated_m = current_m - birth_m;
	int calculated_y = current_y - birth_y;

	cout << "you have " << calculated_y << " years" << calculated_m << " months" << calculated_d << " DAys" << endl;



	system("pause");
	return 0;

}
