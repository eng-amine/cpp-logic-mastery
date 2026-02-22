#include <iostream>
using namespace std;

bool Isleapyear(short year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short Readday()
{
	short year = 0;
	cout << "Enter a day    ";
	cin >> year;
	return year;
}

short Readmounth()
{
	short year = 0;
	cout << "Enter a mounth    ";
	cin >> year;
	return year;
}

short ReadYear()
{
	short year = 0;
	cout << "Enter a year    ";
	cin >> year;
	return year;
}

short DayOfWeekOrder(short year, short mounth, short day = 1)
{
	short a = (14 - mounth) / 12;
	short y = year - a;
	short m = mounth + (12 * a) - 2;

	short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	return d;
}

short NumberOfDaysInAMonth(short year, short mounth)
{

	short NumberOfdaysInmounth[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return (mounth == 2) ? (Isleapyear(year) ? 29 : 28) : NumberOfdaysInmounth[mounth - 1];
}

short NumberOfDaysFromBiginingOfTheYear()
{
	short day = Readday();
	short mounth = Readmounth();
	short year = ReadYear();

	short count = 0;

	for (int i = 1; i <= mounth; i++)
	{
		count += NumberOfDaysInAMonth(year, i);
	}
	count = count - (NumberOfDaysInAMonth(year, mounth) - day);
	return count;
}

int main()
{
	cout << "\nNumber of days from bigining of the year is " << NumberOfDaysFromBiginingOfTheYear() << endl;;

	system("pause>0");
	return 0;
}
