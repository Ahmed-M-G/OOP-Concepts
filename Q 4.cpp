#include<iostream>
using namespace std;
class point
{
	int x,y,z;
public:
	/*void set()
	{
		cout<<"x :"; cin>>x;
		cout<<"y :"; cin>>y;
		cout<<"z :"; cin>>z;
	}
	//------------------------------------------------
	void display()
	{
		cout<<"x :"<<x<<endl;
		cout<<"y :"<<y<<endl;
		cout<<"z :"<<z<<endl;
	}*/
	//------------------------------------------------
	friend istream & operator >> (istream & in,point & a)
	{
		in>>a.x>>a.y>>a.z;
		return in;
	}
	//------------------------------------------------
	friend ostream & operator << (ostream & out,point & b)
	{
		out<<b.x<<endl<<b.y<<endl<<b.z<<endl;
		return out;
	}
	point operator ++()
	{
		x++;
		y++;
		z++;
		return *this;
	}
	point operator ++(int)
	{
		point t=*this;
		x++;
		y++;
		z++;
		return t;
	}


};
void main()
{
	point p1,p2,p3;
	//p1.set();
	cin>>p1;
	cout<<"======================================"<<endl;
	//p2.set();
	cin>>p2;
	cout<<"======================================"<<endl;
	p1=p2++;
	cout<<"postfix"<<endl<<"p1 :"<<endl;
	//p1.display();
	cout<<p1;
	cout<<"p2 :"<<endl;
	//p2.display();
	cout<<p2;
	cout<<"======================================"<<endl;
	p1=++p2;
	cout<<"prifix"<<endl<<"p1 :"<<endl;
	//p1.display();
	cout<<p1;
	cout<<"p2 :"<<endl;
	//p2.display();
	cout<<p2;
	cout<<"======================================"<<endl;
	system ("pause");
}