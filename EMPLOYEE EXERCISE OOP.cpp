#include<iostream>

using namespace std;

class clsEmployee
{
private:
	short _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	short _Salary;
	string _Department;

public:
	clsEmployee(short ID, string FirstName, string LastName, string Title, string Email, string Phone, short Salary, string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Title = Title;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
	}


	short ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}
	string Title()
	{
		return _Title;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}
	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}
	string Phone()
	{
		return _Phone;
	}

	void SetSalary(short Salary)
	{
		_Salary = Salary;
	}
	short Salary()
	{
		return _Salary;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}
	string Department()
	{
		return _Department;
	}

	void sendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent succssefully to email:  " << _Email;
		cout << "\nSubject:  " << Subject;
		cout << "\nBody:  " << Body;
	}

	void sendSMS(string SMS)
	{
		cout << "\nThe following SMS sent succssefully to Phone:  " << _Phone << endl;
		cout << SMS;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "-------------------------------------";
		cout << "\nID     : " << _ID << endl;
		cout << "FirstName: " << _FirstName << endl;
		cout << "LastName : " << _LastName << endl;
		cout << "FullName : " << FullName() << endl;
		cout << "Title    : " << _Title << endl;
		cout << "Email    : " << _Email << endl;
		cout << "Phone    : " << _Phone << endl;
		cout << "Salary    : " << _Salary << endl;
		cout << "Department    : " << _Department << endl;
		cout << "-------------------------------------\n";

	}
};

int main()
{
	clsEmployee Employee(19, "Mohamed Amine", "El Mettousse", "Ingineer", "elmettousse1234@gmail.com", "0607909857", 1000, "IT department");

	Employee.Print();

	Employee.sendEmail("Welcom", "Thank you for this sakrify and your consestency\n");
	Employee.sendSMS("Thank you for this sakrify and your consestency\n");

	system("pause>0");
	return 0;
}