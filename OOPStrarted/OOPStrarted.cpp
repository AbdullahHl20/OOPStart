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
		clsAddress(clsAddress & old_obj)
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


int main()
{
	clsPerson Person1;
	Person1.FirstName = "Abdullah";
	Person1.LastName = "Alhelal";

	cout << Person1.FullName() << endl;
	string S1;
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
