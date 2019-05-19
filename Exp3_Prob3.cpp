#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int size, x, y, temp;
	char arr[100];

	cout << "Enter Array Size: ";
	cin >> size;

	cout << "\nEnter " << size << " characters: ";
	for(x=0; x<size; x++)
	{
		cin >> arr[x];
	}
	
	y = x - 1;
	x = 0;

	while(x<y)
	{
		temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
		x++;
		y--;
	}

	cout<<"\nThe Reverse of the Array is : ";
	for(x=0; x<size; x++)
	{
		cout << arr[x]<<" ";
	}
	getch();
	return 0;
}
