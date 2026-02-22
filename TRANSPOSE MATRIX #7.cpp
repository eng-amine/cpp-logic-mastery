#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void FillMatrix(int arr[3][3], short Rows, short Cols)
{
    short count = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            count++;
            arr[i][j] = count;
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}


void TransposeMatrix(int arr[3][3], int arr2[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr2[i][j] = arr[j][i];
        }
        cout << endl;
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3], arr2[3][3];

    FillMatrix(arr, 3, 3);

    cout << "\nThe folowing is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arr2, 3, 3);
    cout << "\nThe folowing is transpose matrix:\n";
    PrintMatrix(arr2, 3, 3);
}