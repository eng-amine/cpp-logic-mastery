#include <iostream>
using namespace std;

void printfibonaciinARRAY(int num)
{
    int arr[100];
    for(int i = 2; i <= num + 1; i++)
    {
        arr[0] = 0;
        arr[1] = 1;
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i - 1] << "   ";
    }
}

void printfibonaci(int num)
{
    int Febnum = 0;
    int prev1 = 0, prev2 = 1;
    cout << prev2 << "   ";
    for (int i = 2; i <= num; i++)
    {
        Febnum = prev1 + prev2;
        cout << Febnum << "   ";
        prev1 = prev2;
        prev2 = Febnum;
    }
}

void printfibonaciusingrecursion(int num, int prev1, int prev2)
{
    int Febnum = 0;
    if(num != 0)
    {
        Febnum = prev1 + prev2;
        prev2 = prev1;
        prev1 = Febnum;
        cout << Febnum << "   ";
     
        printfibonaciusingrecursion(num - 1, prev1, prev2);
    }
}

int main()
{
    printfibonaciusingrecursion(10, 0, 1);
    system("pause > 0");
}
