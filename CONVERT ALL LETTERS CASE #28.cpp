#include <iostream>
#include <string>


using namespace std;

string ReadString()
{
    string str;
    cout << "Enter your string:\n";
    getline(cin, str);
    return str;
}

char  InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

string InvertAllStringLettersCase(string S1)
{
    bool isFirstLetter = true;
    cout << "\nString aftr upper: \n";
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            S1[i] = InvertLetterCase(S1[i]);
        }
    }
    return S1;
}

int main()
{
    string S1 = ReadString();

    cout << InvertAllStringLettersCase(S1) << endl;
}