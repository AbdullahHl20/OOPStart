#include <iostream>
using namespace std;
class clsPerson
{
public:
	virtual void Print()
	{
		cout << "Hi, i'm a person!\n ";
	}
};
class clsEmployee : public clsPerson
{
public:
	void Print()
	{
		cout << "Hi, I'm an Employee\n";
	}
};
class clsStudent : public clsPerson
{
public:
	void Print()
	{
		cout << "Hi, I'm a student\n";
	}
};


//Abstract Class / Interface / Contract.
class clsMobile
{
	virtual void Dial(string PhoneNumber) = 0;
	virtual void SendSMS(string PhoneNumber, string Text) = 0;
	virtual void TakePicture() = 0;
};
class clsiPhone : public clsMobile
{
	//This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class.
public:
	void Dial(string PhoneNumber)
	{
	};
	void SendSMS(string PhoneNumber, string Text)
	{
	};
	void TakePicture()
	{
	};
	void MyOwnMethod()
	{
	}
};

class clsSamsungNote10 : public clsMobile
{
	//This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class
public:
	void Dial(string PhoneNumber)
	{
	};
	void SendSMS(string PhoneNumber, string Text)
	{
	};
	void TakePicture()
	{
	};
};



class clsA
{
private:
	int _Var1;
protected:
	int _Var3;
public:
	int Var2;
	clsA()
	{
		_Var1 = 10;
		Var2 = 20;
		_Var3 = 30;
	}
	//This will grant access for everything to class B
	friend class clsB; //friend class
	friend int MySum(clsA A1); //friend Function
};

//this function is a normal function and not a member of any class
int MySum(clsA A1)
{
	return A1._Var1 + A1.Var2 + A1._Var3;
}

//int Fun2(clsA A1)
//{
// return A1._Var1 + A1.Var2 + A1._Var3;
//}

class clsB
{
public:

	void display(clsA A1)
	{
		cout << endl << "The value of Var1=" << A1._Var1;
		cout << endl << "The value of Var2=" << A1.Var2;
		cout << endl << "The value of Var3=" << A1._Var3;
	}
};

class clsPersonWithstruct {

	struct stAddress
	{
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;
	};

public:
	string FullName;
	stAddress Address;

	clsPersonWithstruct()
	{
		FullName = "Mohammed Abu-Hadhoud";
		Address.AddressLine1 = "Building 10";
		Address.AddressLine2 = "Queen Rania Street";
		Address.City = "Amman";
		Address.Country = "Jordan";
	}

	void PrintAddress()
	{
		cout << "\nAddress:\n";
		cout << Address.AddressLine1 << endl;
		cout << Address.AddressLine2 << endl;
		cout << Address.City << endl;
		cout << Address.Country << endl;
	}

};


int main() 
{

}
//int main()
//{
//clsEmployee Employee1;
//clsStudent Student1;
////Early-Static Binding: at compilation time
//Employee1.Print();
//Student1.Print();
//clsPerson* Person1 = &Employee1;
//clsPerson* Person2 = &Student1;
////Late-Dynamic Binding: at runtime
//Person1->Print();
//Person2->Print();
//system("pause>0");
////}
