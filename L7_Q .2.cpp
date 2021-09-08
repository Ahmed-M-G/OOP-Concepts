#include<iostream>
#include<string>
using namespace std;
class shape
{
protected:
	double L;
public:
	void set_s()
	{
		cout<<"L ="; cin>>L;
	}
};
class rect :public shape
{
protected:
	double W;
public:
	void set_r()
	{
		cout<<"W ="; cin>>W;
	}
	double area()
	{
		return L*W;
	}
};
class par :public rect
{
	double H;
public:
	void set_p()
	{
		cout<<"H ="; cin>>H;
	}
	double volume()
	{
		return L*W*H;
	}
};
void main()
{
	rect x;
	par z;
	x.set_s();
	x.set_r();
	cout<<"area :"<<x.area()<<endl;
	z.set_p();
	z.set_s();
	z.set_r();
	cout<<"volum :"<<z.volume()<<endl;

	system("pause");
}