#include<iostream>
#include<math.h>
#include<string>
class X_axis
{
protected:
	float x;
public:
	X_axis()
	{
		x=2;
	}
};
class Y_axis
{
protected:
	float y;
public:
	Y_axis()
	{
		y=3;
	}
};
class point :public X_axis ,public Y_axis
{
	float z;
public:
	point()
	{
		X_axis();
		Y_axis();
		z=0;
	}
	void set()
	{
		cout<<"z:"; cin>>z;
	}
	float norm()
	{
		return sqrt((x*x)+(y*y)+(z*z));
	}
	friend double dist(point A,point B)
	{
		return sqrt(pow((double)A.x-B.x,2)+pow((double)A.y-B.y,2)+pow((double)A.z-B.z,2));
	}
};
using namespace std;
void main()
{
	point p1,p2;
	p1.set();
	p2.set();
	p1.norm();

	system ("pause");
}