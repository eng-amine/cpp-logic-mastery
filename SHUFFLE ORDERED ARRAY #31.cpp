#include <iostream>

using namespace std;

void Swap(int& A, int& B)
{ 
	int Temp;  
	Temp = A;
	A = B; 
	B = Temp; 
}

int RandomNumber(int From, int To)
{ 
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From; 
	return randNum; 
}

void fiilArrayWithOrderedNum(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = i + 1;
	}
}

void printArray(int arr[100], int arrlength)
{
	cout << endl;
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "   ";
	}
}

void shuffleArray(int arr[100], int arrlength)
{
	return Swap(arr[RandomNumber(0, arrlength - 1)], arr[RandomNumber(0, arrlength - 1)]);
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength = 10;

	fiilArrayWithOrderedNum(arr, arrlength);
	printArray(arr, arrlength);

	shuffleArray(arr, arrlength);
	printArray(arr, arrlength);
}