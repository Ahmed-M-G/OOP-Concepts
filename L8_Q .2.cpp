#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class point 
{
protected:
	int x,y;
public:
	void set()
	{
		cout<<"x:"; cin>>x;
		cout<<"y:"; cin>>y;
	}
	virtual void dis()=0;
};
class comp :public point
{
public:
	void dis()
	{
		cout<<"complex: \n"<<x<<"+i"<<y<<endl;
	}
};
class ratio :public point
{
public:
	void dis()
	{
		cout<<"ratio: \n"<<x<<"/"<<y<<endl;
	}
};
class p_2D :public point
{
public:
	void dis()
	{
		cout<<"2D: \n"<<"("<<x<<","<<y<<")"<<endl;
	}
};
void main()
{
	point *p;
	comp c;
	ratio r;
	p_2D a;
	p=&c;
	p->set();
	p->dis();
	cout<<"==============================================\n";
	p=&r;
	p->set();
	p->dis();
	cout<<"==============================================\n";
	p=&a;
	p->set();
	p->dis();
	cout<<"==============================================\n";
	system("pause");
}