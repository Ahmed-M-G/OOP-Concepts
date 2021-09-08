#include <iostream>
using namespace std;
struct time
{
	int hours,minutes,seconds;
};
void set(time& c)
{
	cout<<"hours=" ;cin>>c.hours;
	cout<<"minutes=" ;cin>>c.minutes;
	cout<<"seconds=" ;cin>>c.seconds;
}
void display(time x)
{
	cout<<"hours="<<x.hours<<endl;
	cout<<"minutes="<<x.minutes<<endl;
	cout<<"seconds="<<x.seconds<<endl;
}
void inc(int& i,time& t)
{
	cout<<"enter the new seconds"; cin>>i;
	if(i+t.seconds==60)
		{
			cout<<"hours = "<<t.hours<<endl;
			cout<<"minutes = "<<t.minutes+1<<endl;
		}
	else if(t.seconds>60)
	{
		t.minutes +=t.seconds/60;
		t.seconds=t.seconds-i;
	}
	cout<<"ho = "<<t.hours<<endl;
	cout<<"min = "<<t.minutes<<endl;  
	cout<<"sec = "<<t.seconds<<endl;
}
void main()
{
	int a;
	time t1;
	set(t1);
	display(t1);
	inc(a,t1);
	system("pause");
}