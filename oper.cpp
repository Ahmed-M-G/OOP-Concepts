#include<iostream>
using namespace std;
class tri
{
	float h,w;
public:
	tri(float a=0,float b=0)
	{
		h=a;
		w=b;
	}
	void set()
	{
		cout<<"h :"; cin>>h;
		cout<<"w :"; cin>>w;
	}
	void dis()
	{
		cout<<"h :"<<h<<endl;
		cout<<"w :"<<w<<endl;
	}
	tri operator +(tri x)
	{ 
		tri z;
		z.h=h+x.h;
		z.w=w+x.w;
		return z;
	}
	tri operator++()
	{
		h++;
		w++;
		return * this;
	}
	tri operator++(int)
	{
		tri t= * this;
		h++;
		w++;
		return t;
	}
	void operator += (tri r)
	{
		h=h+r.h;
		w=w+r.w;
	}
};
void main()
{
	tri c1,c2(5,3),c3;
	c1.set();
	//c2.set();
	c3=c1+c2;
	c3.dis();
	//c1++;
	//c1.dis();
	/*c1=c2++;
	c1.dis();
	c2.dis();*/
	c1+=c2;
	c1.dis();



	system("pause");
}