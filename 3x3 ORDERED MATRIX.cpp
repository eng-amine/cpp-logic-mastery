#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void FiilMatrixWithOrderednumbers(int matrix[3][3], short rows, short cols)
{
    int num = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            num++;
            matrix[i][j] = num;
        }
    }
}

void PrintMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << matrix[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    FiilMatrixWithOrderednumbers(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);

}