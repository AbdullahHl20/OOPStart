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
