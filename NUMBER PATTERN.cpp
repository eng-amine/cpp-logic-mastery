#include<iostream>
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

void PrintPattern(int number)
{
	cout << endl;
	for (int i = 1; i <= number; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintPattern(ReadPositiveNumber("Please enter a positive number\n"));
}