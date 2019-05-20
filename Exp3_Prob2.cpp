#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x;
	double ProvA[7], ProvB[7], ProvC[7];

	//INPUT of TEMP
	cout << "===Enter all temperatures in Province A for this week===" << endl;
	for (x=0; x<7; x++)
	{
		cout << "Temperature at Province A, Day " << x+1 << ": ";
		cin >> ProvA[x];
	}

	cout << "\n\n===Enter all temperatures in Province B for this week===" << endl;
	for (x=0; x<7; x++)
	{
		cout << "Temperature at Province B, Day " << x+1 << ": ";
		cin >> ProvB[x];
	}

	cout << "\n\n===Enter all temperatures in Province C for this week===" << endl;
	for (x=0; x<7; x++)
	{
		cout << "Temperature at Province C, Day " << x+1 << ": ";
		cin >> ProvC[x];
	}



	//DISPLAY of TEMP
	
	cout << "\n\n\n\===Displaying Values for Temperatures in Each Province===" << "\n";
	cout << "Temperatures in Province A for this week:" << "\n";
	for (x=0; x<7; x++)
	{
	cout << "Temperature at Province A, Day " << x+1 << ": " << ProvA[x] << endl;
	}
	
	cout << "\nTemperatures in Province B for this week:" << "\n";
	for (x=0; x<7; x++)
	{
	cout << "Temperature at Province B, Day " << x+1 << ": " << ProvB[x] << endl;
	}
	
	cout << "\nTemperatures in Province C for this week:" << "\n";
	for (x=0; x<7; x++)
	{
	cout << "Temperature for Province C, Day " << x+1 << ":" << ProvC[x] << endl;
	}

	getch();
	return 0;
}
