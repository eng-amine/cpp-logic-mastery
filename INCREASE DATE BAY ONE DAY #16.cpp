#include <iostream>
using namespace std;

struct stDate { short Year; short Month; short Day; };

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

stDate ReadFullDate()
{
	stDate date;
	date.Day = Readday();
	date.Month = Readmounth();
	date.Year = ReadYear();
	return date;
}

bool Isleapyear(short year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short NumberOfDaysInAMonth(short year, short mounth)
{
	short NumberOfdaysInmounth[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return (mounth == 2) ? (Isleapyear(year) ? 29 : 28) : NumberOfdaysInmounth[mounth - 1];
}

bool IsLastMounth(short mounth)
{
	return (mounth == 12);
}

bool IsLastDay(stDate date1)
{
	short numberofdaysinmounth = NumberOfDaysInAMonth(date1.Year, date1.Month);
	return(date1.Day == numberofdaysinmounth);
}

stDate IncreaseDateByOneDay(stDate date1)
{
	if (IsLastMounth(date1.Month))
	{
		if(IsLastDay(date1))
		{
			date1.Year++;
			date1.Month = 1;
			date1.Day = 1;
		}
		else
		{
			date1.Month++;
			date1.Day = 1;
		}
	}

	else
		date1.Day++;

	return date1;
}
int main()
{
	stDate date1 = ReadFullDate();

    date1 = IncreaseDateByOneDay(date1);

	printf("\nDate after ading one day:  %d/%d/%d\n", date1.Day, date1.Month, date1.Year);


	system("pause>0");
	return 0;
}