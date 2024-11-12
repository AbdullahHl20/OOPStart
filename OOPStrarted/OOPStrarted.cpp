// OOPStrarted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



using namespace std;

class clsPerson
{
private:
	//only accessable inside this calass
	int Variabl1 = 5;

	int Function1()
	{
		return 40;
	}
protected:
	//only accessable inside this calass and all classes inhiretsthis calss
	int Variabl2 = 100;
	int Function2()
	{
		return 50;
	}
public:
	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}
};


class clsPersonwithProperty
{
private:
	string _FirstName;
	string _LastName;
	int _ID = 10;

public:
	//Property Set
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	//Property Get
	string GetFirstName()
	{
		return _FirstName;
	}
	//Property Set
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	//Property Get
	string LastName()
	{
		return _LastName;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	//Property Get, this is a read only property because we don’t have a set function
	int ID()
	{
		return _ID;
	}

	__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;

};

class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;
public:
	clsAddress(string AddressLine1, string AddressLine2, string
		POBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}

	// Copy Constructor
	clsAddress(clsAddress& old_obj)
	{
		_AddressLine1 = old_obj.AddressLine1();
		_AddressLine2 = old_obj.AddressLine2();
		_POBox = old_obj.POBox();
		_ZipCode = old_obj.ZipCode();
	}

	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}
	string AddressLine1()
	{
		return _AddressLine1;
	}
	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}
	string AddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}
	string POBox()
	{
		return _POBox;
	}
	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}
	string ZipCode()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------";
		cout << "\nAddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox : " << _POBox << endl;
		cout << "ZipCode : " << _ZipCode << endl;
	}
};


class clsPersonWithde
{
public:
	string FullName;
	//This is Instructor will be called when object is built.
	clsPersonWithde()
	{
		FullName = "Mohammed Abu-Hadhoud";
		cout << "\nHi, I'm Constructor";
	}
	//This is destructor will be called when object is destroyed.
	~clsPersonWithde()
	{
		cout << "\nHi, I'm Destructor";
	}
};

void Fun1()
{
	clsPersonWithde Person1;
	//after exiting from function, person1 will be
	//destroyed and destructor will be called.
}

void Fun2()
{
	clsPersonWithde* Person2 = new clsPersonWithde;
	//always use delete whenever you use new, otherwise object
	//will remain in memory
	delete Person2;
}



/////static 

class clsA
{
public:
	int var;
	static int counter;
	clsA()
	{
		counter++;
	}
	void Print()
	{
		cout << "\nvar = " << var << endl;
		cout << "counter = " << counter << endl;
	}
};

int clsA::counter = 0; //static variable initialisation outside the class


class clsAA
{
public:
	static int Function1()
	{
		return 10;
	}
	int Function2()
	{
		return 20;
	}
};


class clsPersonExercise {

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPersonExercise(int ID, string FirstName, string LastName, string
		Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	//Read Only Property
	int ID()
	{
		return _ID;
	}
	//Property Set
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	//Property Get
	string FirstName()
	{
		return _FirstName;
	}


	//Property Set
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	//Property Get
	string LastName()
	{
		return _LastName;
	}
	//Property Set
	void setEmail(string Email)
	{
		_Email = Email;
	}
	//Property Get
	string Email()
	{
		return _Email;
	}
	//Property Set
	void setPhone(string Phone)
	{
		_Phone = Phone;
	}
	//Property Get
	string Phone()
	{
		return _Phone;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}


	void Print()
	{
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID : " << _ID;
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _LastName;
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail : " << _Email;
		cout << "\nPhone : " << _Phone;
		cout << "\n___________________\n";
	}
	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;
	}
	void SendSMS(string TextMessage)
	{
		cout << "\nThe following SMS sent successfully to phone: " << _Phone;
		cout << "\n" << TextMessage << endl;
	}
};
class clsEmployee {

	int _ID;
	int	    _Salary;
	string  _FirstName;
	string  _Lastname;
	string	_Title;
	string	_Email;
	string	_Phone;	
	string	_Department;
public:

	clsEmployee(int ID, string FirstName, string Lastname, string Title, string Email,string Phone, int Salary, string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_Lastname = Lastname;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;

	}
	void FullName() 
	{
		cout << _FirstName << "" << _Lastname << endl;
	}
		
	void Print() 
	{

		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID : " << _ID;
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _Lastname;
		cout << "\nFull Name: " << _FirstName << "" << _Lastname;
		cout << "\nEmail : " << _Email;
		cout << "\nPhone : " << _Phone;
		cout << "\n___________________\n";
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe following SMS sent successfully to phone: " << _Phone;
		cout << "\n" << TextMessage << endl;
	}
	

};


int main()
{
	clsPerson Person1;
	Person1.FirstName = "Abdullah";
	Person1.LastName = "Alhelal";
	Fun1();
	Fun2();

	cout << clsAA::Function1() << endl;

	clsA A1, A2, A3;
	A1.var = 10;
	A2.var = 20;
	A3.var = 30;
	A1.Print();
	A2.Print();
	A3.Print();
	A1.counter = 500;
	cout << "\nafter chaning the static member counter in one object:\n";
	A1.Print();
	A2.Print();
	A3.Print();

	cout << Person1.FullName() << endl;


	clsPersonExercise PersonExercise(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "0098387727");
	PersonExercise.Print();
	PersonExercise.SendEmail("Hi", "How are you?");
	PersonExercise.SendSMS("How are you?");
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
