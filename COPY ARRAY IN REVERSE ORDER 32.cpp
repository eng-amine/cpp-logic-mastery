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
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arrlength, int arr[100])
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void CopyOnReverseOrderArray(int arrlength, int arr[100] ,int arr2[100])
{
	for (int i = 0; i < arrlength; i++)
	{
		arr2[i] = arr[arrlength - 1 - i];
	}
}

bool IsPalindromeArray(int arrlength, int arr[100], int arr2[100])
{
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] != arr2[i])
		{
			return false;
		}
		return true;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arrlength = ReadPositiveNumber("\nEnter numbers of elements\n"), arr[100], arr2[100];

	FiilArrayWithRandomeNumberArray(arrlength, arr);

	cout << "\nArray 1 elements:\n";
	PrintArray(arrlength, arr);

	CopyOnReverseOrderArray(arrlength, arr, arr2);

	cout << "\nArray 2 elements after copying array in revers order:\n ";
	PrintArray(arrlength, arr2);

	if (IsPalindromeArray(arrlength, arr, arr2))
	{
		cout << "Yes is a palindrome array.\n";
	}
	else
		cout << "No is not a palindrome number.\n";
}