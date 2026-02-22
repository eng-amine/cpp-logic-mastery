#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg)
{
	int number;
	do
	{
		cout << msg;
		cin >> number;
	} while (number < 0);
	return number;
}

void AddArrayElents(int Number, int& arrlength, int arr[100])
{
	arrlength++;
	arr[arrlength - 1] = Number;
}

void InputUserArrayElements(int& arrlength, int arr[100])
{
	bool Addmore = true;
	do
	{
		int Number = ReadPositiveNumber("\nPlease enter a number: ");
		AddArrayElents(Number, arrlength, arr);
		
		cout << "Do you want to add more numbers? ";
		cin >> Addmore;
	} while (Addmore);
}

void PrintArray(int arrlength, int arr[100])
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arrlength = 0, arr[100];

	InputUserArrayElements(arrlength, arr);

	cout << "\nArray length: " << arrlength;
	cout << "\nArray elements: ";
	PrintArray(arrlength, arr);
}