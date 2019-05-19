#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main ()
{
    int arr[10], element, Lnum, Snum;
	float total, ave;
    
    for (element=0; element<10; element++)
	{
		cout << "Enter a number: ";
        cin >> arr[element];
	}

    Lnum = arr[0];
    for (element=0; element<10; element++)
    {
        if (Lnum < arr[element])
            Lnum = arr[element];
    }

    Snum = arr[0];
    for (element=0; element<10; element++)
    {
        if (Snum > arr[element])
            Snum = arr[element];
    }
	
	total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
	ave = total / 10;
	cout << setprecision(2) << fixed << showpoint;

    cout << "\nThe smallest integer is: " << Snum << "\n";
    cout << "The largest integer is: " << Lnum << "\n";
	cout << "The sum of the integers is: " << total << "\n";
	cout<< "The average of the integers is: " << ave << "\n";

	getch();
    return 0;
}
