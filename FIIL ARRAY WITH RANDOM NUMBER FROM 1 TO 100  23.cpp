#include <iostream>
using namespace std;

int RandomNumber(int from, int to)
{
	int randomnumber = rand() % (from - to + 1) + from;
	return randomnumber;
}

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

void FiilArrayWithRandomeNumberArray(int& arrlength, int arr[100])
{
	for (int i = 1; i <= arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arrlength, int arr[100])
{
	for (int i = 1; i <= arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arrlength = ReadPositiveNumber("\nEnter numbers of elements\n"), arr[100];

	FiilArrayWithRandomeNumberArray(arrlength, arr);

	cout << "\nArray elements: ";
	PrintArray(arrlength, arr);

}