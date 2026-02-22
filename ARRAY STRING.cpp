#include<iostream>
using namespace std;

int readnumber(string msg)
{
	int num;
	do
	{
		cout << msg;
		cin >> num;
	} while ((num) < 0);
	return num;
}

void ReadArray(int arr[100], int& arrlength)
{
	cout << "Enter number of elements:\n";
	cin >> arrlength;

	cout << "\nEnter array elements\n";
	for (int i = 1; i <= arrlength; i++)
	{
		cout << "Element[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 1; i <= arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
}

int timesrepeadit(int number, int arr[100], int arrlength)
{
	int counter = 0;
	for (int i = 1; i <= arrlength; i++)
	{
		arr[i];
		if (arr[i] == number)
		{
			counter++;
		}
	}
	return counter;

}

int main()
{
	int arr[100], arrlength, numbertochek;
	ReadArray(arr, arrlength);

	numbertochek = readnumber("\nEnter number do you want to chek\n");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrlength);

	cout << "\n\nnumber " << numbertochek << " is repeated "
		<< timesrepeadit(numbertochek, arr, arrlength) << " time(s)\n";

}

