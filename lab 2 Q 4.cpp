#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class student
{
	int id;
	string name;
	float mark[6];
public:
	void read()
	{
		cout<<"id="; cin>>id;
		cout<<"name:"; cin>>name;
		for(int i=0;i<6;i++)
		{
			cout<<"mark["<<i+1<<"]=";
			cin>>mark[i];
		}
	}
	void display()
	{
		cout<<"id="<<id<<endl;
		cout<<"name"<<name<<endl;
		for(int i=0;i<6;i++)
		{
			cout<<"mark["<<i+1<<"]="<<mark[i]<<endl;
		}
	}
	int total()
	{
		int sum=0;
		for(int i=0;i<6;i++)
		{
			sum+=mark[i];
		}
		return sum;
	}
	
	float avg( float a)
	{
		return a/6;
	}
};
void main()
{
	student s;
	s.read();
	s.display();
	cout<<"sum ="<<s.total()<<endl;
	cout<<"avrage="<<s.avg(s.total())<<endl;

	system("pause");
}