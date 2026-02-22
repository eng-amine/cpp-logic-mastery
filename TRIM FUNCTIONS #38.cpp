#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
    string str;
    cout << "Enter your string? \n";
    getline(cin, str);
    return str;
}
//
//string TrimLeft(string S1)
//{
//    string word;
//    int counter = 0;
//    for (int i = 0; i <= S1.length(); i++)
//    {
//        if (S1[i] != ' ')
//            break;
//        counter++;
//    }
//    word = S1.substr(counter, S1.length());
//    return word;
//}
//
//string TrimRight(string S1)
//{
//    string Word;
//    int counter = 0;
//    for (int i = 0; i <= S1.length(); i++)
//    {
//        if (S1[i] != ' ')
//            break;
//        counter++;
//    }
//    for (int i = counter; i <= S1.length(); i++)
//    {
//        if (S1[i] == ' ')
//        {
//            if (S1[i + 1] == ' ')
//            {
//                break;
//            }
//        }
//        counter++;
//    }
//    Word = S1.substr(0, counter);
//    return Word;
//}
//
//string Trim(string str)
//{
//    return(TrimRight(TrimLeft(str)));
//}
//
//int main()
//{
//    string str = ReadString();
//
//    cout << "\nString     : " << str << " /" << str.length() << endl;
//
//    cout << "\n\nTrim left  : " << TrimLeft(str) << " /" << TrimLeft(str).length() << endl;
//    cout << "\nTrim right : " << TrimRight(str) << " /" << TrimRight(str).length() << endl;
//    cout << "\nTrim right : " << Trim(str) << " /" << Trim(str).length() << endl;
//
//}

string TrimLeft(string str)
{
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ')
            return str.substr(i, str.length());
    }
}

string TrimRight(string str)
{
    for (int i = str.length() - 1; i > 0; i--)
    {
        if (str[i] != ' ')
            return str.substr(0, i + 1);
    }
}

string Trim(string str)
{
    return TrimLeft(TrimRight(str));
}

int main()
{
    string str = ReadString();

    cout << "\nString     : " << str << " /" << str.length() << endl;

    cout << "\n\nTrim left  : " << TrimLeft(str) << " /" << TrimLeft(str).length() << endl;
    cout << "\nTrim right : " << TrimRight(str) << " /" << TrimRight(str).length() << endl;
    cout << "\nTrim right : " << Trim(str) << " /" << Trim(str).length() << endl;

}