#include <iostream>
#include<string>
#include<iomanip>

using namespace std;
int RandomNumber(int from, int to)
{
    int randomnumber = rand() % (from - to + 1) + from;
    return randomnumber;
}

void FiilMatrixWithRandomnumbers(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d    ", 2, matrix[i][j]);
        }
        cout << endl;
    }
}

bool IsPalindrom(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for(short j = 0; j < cols/2; j++)
        {
            if (matrix[i][j] != matrix[i][cols-1-j])
                return false;
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3]{ {1, 2, 1}, {4, 1, 4}, {5, 7, 1} };

    //FiilMatrixWithRandomnumbers(matrix, 3, 3);
    cout << "The folowing is a 3x3 random matrix\n";
    PrintMatrix(matrix, 3, 3);

    if (IsPalindrom(matrix, 3, 3))
        cout << "\nYes, it's a palindrom matrix.\n";
    else 
        cout << "\nNo, it's not a palindrom matrix.\n";

}