#include <iostream>
#include <string>
using namespace std;

string readString()
{
    string str;
    cout << "The original string is:\n";
    getline(cin, str);
    return str;
}

string LowerFirstLetters(string str)
{
    bool isThefirstletter = true;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ' && isThefirstletter)
        {
            str[i] = tolower(str[i]);
        }
        isThefirstletter = (str[i] == ' ' ? true : false);
    }

    return str;
}

int main()
{
    string s1 = readString();

    cout << "\nString after conversion\n "
        << LowerFirstLetters(s1) << endl;
}