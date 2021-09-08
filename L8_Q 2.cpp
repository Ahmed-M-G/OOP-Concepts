#include<iostream>
#include<math.h>
using namespace std;
class point 
{
protected:
	int x , y;
public:
	void set()
	{
		cout<<"x:"; cin>>x;
		cout<<"y:"; cin>>y;
	}
	virtual void display()
	{
		//cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
	}
};
class complex :public point
{
public:
	void display()
	{
		cout<<"complex num :"<<x<<"+i"<<y<<endl;
	}
};
class ratio :public point
{
public:
	void display()
	{
		cout<<"ratio num :"<<x<<"/"<<y<<endl;
	}
};
class point_2D : public point
{
public:
	void display()
	{
		cout<<"2D num :"<<"("<<x<<","<<y<<")"<<endl;
	}
};
void main()
{
	point a,*p;
	complex c;
	ratio r;
	point_2D s;
	p=&a;
	p->set(); //a.set();
	p->display(); //a.display();
	cout<<"=============================================\n";
	p=&c;
	p->set();  //c.set();
	p->display();
	cout<<"=============================================\n";
	p=&r;
	p->set();
	p->display();
	cout<<"=============================================\n";
	p=&s;
	p->set();
	p->display();


	system("pause");
}