#include<iostream>
#include<math.h>
using namespace std;
class shape
{
protected:
	double L;
public:
	void get_data()
	{
		cout<<"L="; cin>>L;
	}
	virtual double dis_area()
	{
		return 0;
	}
};
class circle :public shape
{
public:
	double dis_area()
	{
		return L*L*(3.14);
	}
};
class square :public shape
{
public:
	double dis_area()
	{
		return L*L;
	}
};
void main()
{
	shape s, *p;
	circle c;
	square q;
	p= & s;
	p->get_data();
	cout<<"shape area:"<<p->dis_area()<<endl;
	p=&c;
	p->get_data();
	cout<<"circle area:"<<p->dis_area()<<endl;
	p= & q;
	p->get_data();
	cout<<"square area:"<<p->dis_area()<<endl;



	system("pause");
}