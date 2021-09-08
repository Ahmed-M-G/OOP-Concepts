#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class  Base
{
protected:
	double L;
public:
	void getl()
	{
		cout<<"L ="; cin>>L;
	}
};
class rect :virtual public Base
{
protected:
	double W;
public:
	void getW()
	{
		cout<<"W ="; cin>>W;
	}
};
class para : public rect
{
	double H;
public:
	void getH()
	{
		cout<<"H ="; cin>>H;
	}
	double vol()
	{
		return L*W*H;
	}
};
void main()
{
	para p;
	p.getl();
	p.getW();
	p.getH();
	cout<<"vol :"<<p.vol()<<endl;

	system("pause");
}