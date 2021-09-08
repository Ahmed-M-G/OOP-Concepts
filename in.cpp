#include<iostream>
#include<string>
using namespace std;
class A
{
protected:
	int a;
public:
	void setA()
	{
		cout<<"a="; cin>>a;
	}
	void displayA()
	{
		cout<<"a="<<a<<endl;
	}
	int geta()
	{
		return a;
	}
};
class B : public A
{
	int b;
public:
	/*void setB()
	{
		setA();
		cout<<"b="; cin>>b;
	}
	void displayB()
	{
		displayA();
		cout<<"b="<<b<<endl;
	}*/
	void setb()
	{
		cout<<"b="; cin>>b;
	}
	void displayb()
	{
		cout<<"b ="<<b<<endl;
	}
	int sum ()
	{
		return a+b;
	}
};
void main()
{
	B b1;
	b1.setA();
	b1.setb();
	b1.displayb();
	b1.displayA();
	cout<<"sum="<<b1.sum()<<endl;
	system("pause");
}