#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct stInfo
{
    string AccNum, name, phone, pinCode;
    double accBalnce;
};

vector<string> SplitFunc(string str, string delim)
{
    vector<string> vWord;

    short pos = 0;
    string sWord;

    while ((pos = str.find(delim)) != std::string::npos)
    {
        sWord = str.substr(0, pos);

        if (sWord != "")
        {
            vWord.push_back(sWord);
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        vWord.push_back(str);
    }
    return vWord;
}

stInfo convertLineDatatoRecord(string line, string seperator = "#//#")
{
    stInfo info;
    vector<string> vinfo = SplitFunc(line, seperator);


    info.AccNum = vinfo[0];

    info.pinCode = vinfo[1];

    info.name = vinfo[2];

    info.phone = vinfo[3];

    info.accBalnce = stod(vinfo[4]);

    return info;
}

//stInfo convertLineDatatoRecord(string line, string seperator = "#//#")
//{
//    stInfo info;
//    info.AccNum = line.substr(0, line.find("#"));
//    line.erase(0, line.find("#") + seperator.length());
//
//    info.pinCode = line.substr(0, line.find("#") );
//    line.erase(0, line.find("#") + seperator.length());
//
//    info.name = line.substr(0, line.find("#") );
//    line.erase(0, line.find("#") + seperator.length());
//
//    info.phone = line.substr(0, line.find("#") );
//    line.erase(0, line.find("#") + seperator.length());
//
//    info.accBalnce = line;
//
//    return info;
//}

void printData(stInfo info)
{
    cout << "The followin is extracted client data:\n";
    cout << "\nAccount number:  ";
    cout << info.AccNum << endl;

    cout << "Pin code:        ";
    cout << info.pinCode << endl;

    cout << "your name:       ";
    cout << info.name << endl;

    cout << "phone number:    ";
    cout << info.phone << endl;

    cout << "Account balance: ";
    cout << info.accBalnce << endl;
}

int main()
{
    cout << "Line record is:\nDF4855#//#251987#//#MOHAMED#//#0607909857#//#500000.000000 \n\n";

    //stInfo info = ReadNewClient();
    //cout << "\n\n client record for saving is:\n" << ConvertRecordToLine(info) << endl;

    
    printData(convertLineDatatoRecord("DF4855#//#251987#//#MOHAMED#//#0607909857#//#500000.000000"));
}