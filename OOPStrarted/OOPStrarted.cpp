// OOPStrarted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsEmployee.h"
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
private:
	//only accessible inside this class, neither derived classes not outside class.
		int _Var1;
	void _Fun1()
	{
		cout << "Function 1";
	}
protected:
	//only accessible inside this class and all derived classes,but not outside class
		int Var2;
	void Fun2()
	{
		cout << "Function 1";
	}
public:
	// Accessible inside this class, all derived classes, andoutside class
		int Var3;
	void Fun3()
	{
		cout << "Function 1";
	}
};

class clsB : public clsA
{
public:
	void Func1()
	{
		cout << clsA::Var2;
	}
};

class clsC
{
private:
	int V1;
	int Fun1()
	{
		return 1;
	}
protected:
	int V2;
	int Fun2()
	{
		return 2;
	}
public:
	int V3;
	int Fun3()
	{
		return 3;
	}
};
// try to change visibility mode public / private / protected
//and see in the main what will happen iside objects.
class clsD : private clsC
{
public:
	int Fun4()
	{
		return 4;
	}
};

class clsf : public clsD
{
public:
	int Fun5()
	{
		return 5;
	}
};


class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:
	clsDeveloper(int ID, string FirstName, string LastName, string
		Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
		:clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;

	}

	void SetMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	string MainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID : " << ID();
		cout << "\nFirstName : " << FirstName();
		cout << "\nLastName : " << LastName();
		cout << "\nFull Name : " << FullName();
		cout << "\nEmail : " << Email();
		cout << "\nPhone : " << Phone();
		cout << "\nTitle : " << Title();
		cout << "\nDepartment: " << Department();
		cout << "\nSalary : " << to_string(Salary());
		cout << "\nMainProgrammingLanguage : " << MainProgrammingLanguage();
		cout << "\n___________________\n";
	}

};


int main()
{
	clsPerson Person1;
	Person1.FirstName = "Abdullah";
	Person1.LastName = "Alhelal";
	Fun1();
	Fun2();
	
	/*cout << clsAA::Function1() << endl;

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
	A3.Print();*/

	cout << Person1.FullName() << endl;


	clsDeveloper PersonExercise(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "0098387727","title","test",15,"main");
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
