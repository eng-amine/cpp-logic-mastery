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

int RandomNumber(int from, int to)
{
	int randomnumber = rand() % (from - to + 1) + from;
	return randomnumber;
}

string GenerateWord()
{
	string word;
	word = word + char(RandomNumber(65, 90));
	word = word + char(RandomNumber(65, 90));
	word = word + char(RandomNumber(65, 90));
	word = word + char(RandomNumber(65, 90));
	return word;
}

string Generatekey()
{
	string key;
	key = Generatekey() + "_" + Generatekey() + "_" + Generatekey() + "_" + Generatekey();
	return key;
}

void Generatekeys(int number)
{
	cout << endl;
	for (int i = 1; i <= number; i++)
		cout << "Key[" << i << "]: " << Generatekey() << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	Generatekeys(ReadPositiveNumber("Enter number of keys.\n"));
}
