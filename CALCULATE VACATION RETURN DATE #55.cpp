#include<iostream>
using namespace std;

struct stDate { short Year; short Month; short Day; };
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}

stDate ReadFullDate()
{
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}

short ReadVacationDays()
{
	short vac;
	cout << "\nPlease enter vacation days:";
	cin >> vac;
	return vac;
}



short DayOfWeekOrder(stDate date)
{
	short a = (14 - date.Month) / 12;
	short y = date.Year - a;
	short m = date.Month + (12 * a) - 2;

	short d = (date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	return d;
}

string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}

bool Isleapyear(short year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return  0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (Isleapyear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

bool isItweekEnd(stDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return  (DayIndex == 5 || DayIndex == 6);
}

stDate IncreaseDateByOneDay(stDate date1)
{
	if (IsLastDayInMonth(date1))
	{
		if (IsLastMonthInYear(date1.Month))
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
	{
		date1.Day++;
	}

	return date1;
}

stDate IncreaseDateByXDays(stDate date, short daystoadd)
{
	for (int i = 0; i < daystoadd; i++)
	{
		date = IncreaseDateByOneDay(date);
	}

	return date;
}

short numofdays(stDate DateFrom, short vacationdays)
{
	int count = 1;
	while (vacationdays > 0)
	{
		count++;
		DateFrom = IncreaseDateByOneDay(DateFrom);
		if (!isItweekEnd(DateFrom))
			vacationdays--;
	}
	/*return IncreaseDateByXDays(DateFrom, count);*/
	return count;
}




stDate VacationReturnDate(stDate DateFrom, short vacationdays)
{
	return IncreaseDateByXDays(DateFrom, numofdays(DateFrom, vacationdays));
}

stDate CalculateVacationReturnDate(stDate DateFrom, short VacationDays)
{
	short WeekEndCounter = 0;

	//in case the data  is weekend keep adding one day util you reach business day
	//we get rid of all weekends before the first business day
	while (isItweekEnd(DateFrom))
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	//here we increase the vacation dates to add all weekends to it.

	for (short i = 1; i <= VacationDays + WeekEndCounter; i++)
	{

		if (isItweekEnd(DateFrom))
			WeekEndCounter++;

		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	//in case the return date is week end keep adding one day util you reach business day
	while (isItweekEnd(DateFrom))
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	return DateFrom;
}



int main()
{
	cout << "Vacation start:";
	stDate date1 = ReadFullDate();
	short vacationdays = ReadVacationDays();


	stDate date2 = VacationReturnDate(date1, vacationdays);

	string day2 = DayShortName(DayOfWeekOrder(date2));
	cout << "\nVcation To: " << day2 << " , " << date2.Day << "/" << date2.Month << "/" << date2.Year << endl;


	stDate date3 = CalculateVacationReturnDate(date1, vacationdays);

	string day3 = DayShortName(DayOfWeekOrder(date3));
	cout << "\nVcation To: " << day3 << " , " << date3.Day << "/" << date3.Month << "/" << date3.Year << endl;

}