#include <iostream>
using namespace std;

void printallword()
{
	cout << endl;
	string word;
	for (int i = 65; i <= 90; i++)
	{
		

		for (int j = 65; j <= 90; j++)
		{
			

			for (int z = 65; z <= 90; z++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(z);

				cout << word;
				cout << endl;
				word = "";
			}
		}
		cout << "\n_______________________________\n";
	}
}

int main()
{
	printallword();
}
