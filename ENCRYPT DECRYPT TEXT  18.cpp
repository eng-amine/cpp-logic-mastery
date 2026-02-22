#include <iostream>
using namespace std;

string ReadText()
{
	string text;
	cout << "Please enter the password\n";
	cin >> text;
	return text;
}

string EncriptionText(string text, int encriptionkey)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i]+encriptionkey);
	}
	return text;
}

string DecriptionText( string encriptText, int encriptionkey)
{
	for (int i = 0; i <= encriptText.length(); i++)
	{
		encriptText[i] = char((int)encriptText[i] - encriptionkey);
	}
	return encriptText;
}

int main()
{
	short encriptionkey = 2;

	string text = ReadText();
	string encriptiontext = EncriptionText(text, encriptionkey);
	string decriptiontext = DecriptionText(encriptiontext, encriptionkey);

	cout << "Text Befor Encription: " << text << endl;
	cout << "Text After Encription: " << encriptiontext << endl;
	cout << "Text After Decription: " << decriptiontext << endl;
}