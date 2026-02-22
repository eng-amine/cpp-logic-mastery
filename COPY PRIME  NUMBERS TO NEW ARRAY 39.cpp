#include <iostream>
using namespace std;

enum enPrimeNotPrime { prime = 1, notprime = 0};

enPrimeNotPrime CheckPrime(int num)
{
	int M = round(num / 2);
	for (int i = 2; i <= M; i++)
	{
		if (num % i == 0)
		{
			return enPrimeNotPrime::notprime;
		}
	}
	return enPrimeNotPrime::prime;
}

int RandomNumber(int from, int to)
{
	int randomnumber = rand() % (from - to + 1) + from;
	return randomnumber;
}

void FiilArrayWithRandomeNumberArray(int arr[100], int& arrlength)
{
	cout << "\nEnter numbers of elements\n";
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;
}

void AddArrayElents(int Number, int arr[100], int& arrlength)
{
	arrlength++;
	arr[arrlength - 1] = Number;
}

void CopyPrimeNumbers(int arr[100], int arr2[100], int arrlength, int& arr2length)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (CheckPrime(arr[i]) == enPrimeNotPrime::prime)
		{
			AddArrayElents(arr[i], arr2, arr2length);
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arrlength = 0, arr2length = 0, arr[100], arr2[100];

	FiilArrayWithRandomeNumberArray(arr, arrlength);

	CopyPrimeNumbers(arr, arr2, arrlength, arr2length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrlength);

	cout << "\nArray 2 elements:\n";
	PrintArray(arr2, arr2length);
}