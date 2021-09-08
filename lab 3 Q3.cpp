#include<iostream>
#include<string>
using namespace std;
class Items
{
	string name;
	int price;
	static int SN;
public:
	void set()
	{
		cout<<"the item name  :"; cin>>name;
		cout<<"the item price :"; cin>>price;
	}
	void display()
	{
		cout<<"item name :"<<name<<"\n";
		cout<<"item price:"<<price<<"\n";
	}
	static void SN_INC()
	{
		SN++;
	}
	static void D_SN()
	{
		cout<<"serial number of item :"<<SN<<"\n";
	}
};
int Items::SN=123456; 
void main()
{
	Items a,b,c,d,e;
	a.set();      Items::SN_INC();
	a.display();  Items::D_SN();
	b.set();      Items::SN_INC();
	b.display();  Items::D_SN();
	c.set();      Items::SN_INC();
	c.display();  Items::D_SN();
	d.set();      Items::SN_INC();
	d.display();  Items::D_SN();
	e.set();      Items::SN_INC();
	e.display();  Items::D_SN();

	system ("pause");
}