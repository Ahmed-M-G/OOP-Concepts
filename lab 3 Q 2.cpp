#include<iostream>
#include<string>
using namespace std;
class Time
{
	int hours , minutes , seconds;
public:
	Time()
	{
		hours=minutes=seconds=0;
	}
	Time(int h,int m,int s) 
	{
		hours=h;
		minutes=m;
		seconds=s;
	}
	void display() const
	{
		cout<<"hours=  "<<hours<<endl;
		cout<<"minutes="<<minutes<<endl;
		cout<<"seconds="<<seconds<<endl;
		cout<<"------------------------------------------------\n";
	}
};
void main()
{
	Time a,b;
	const Time c(10,20,30),d(9,25,30);
	a.display();
	b.display();
	c.display();
	d.display();
	


	system("pause");
}