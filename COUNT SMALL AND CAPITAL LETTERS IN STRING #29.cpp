#include <iostream>
#include <string>
using namespace std;

string readCharactere()
{
    string str;
    cout << "Please enter your string:\n";
    getline(cin, str);
    return str;
}

enum enWhatToCount {SmallLetters = 0, CapitalLetters = 1,All = 3 };

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All) 
{ 
    if (WhatToCount == enWhatToCount::All) 
    { 
        return S1.length(); 
    } 
    short Counter = 0; 
    for (short i = 0; i < S1.length(); i++) 
    {
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))       
            Counter++;

        if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i])) 
            Counter++;
    } 
    return Counter;
}

short CountUpperLettercase(string str)
{
    short counter = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if(isupper(str[i])) 
            counter++;
    }
    return counter;
}

short CountLowerLettercase(string str)
{
    short counter = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (islower(str[i]))
            counter++;
    }
    return counter;
}

void Result()
{
    string s1 = readCharactere();

    cout << "\n String length         " << s1.length();
    cout << "\n Cpital letters count  " << CountUpperLettercase(s1);
    cout << "\n Small letters count   " << CountLowerLettercase(s1) << endl;

    cout << "\n\n Methode 2:";
    cout << "\n String length         " << CountLetters(s1);
    cout << "\n Cpital letters count  " << CountLetters(s1, enWhatToCount::CapitalLetters);
    cout << "\n Small letters count   " << CountLetters(s1, enWhatToCount::SmallLetters) << endl;
}

int main()
{
    Result();
}