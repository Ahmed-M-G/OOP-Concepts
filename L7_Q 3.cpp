#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	string name;
	int age , id;
public:
	void set_s()
	{
		cout<<"name :"; cin>>name;
		cout<<"age ="; cin>>age;
		cout<<"id ="; cin>>id;
	}
	void display_s()
	{
		cout<<"name :"<<name<<endl;
		cout<<"age ="<<age<<endl;
		cout<<"id ="<<id<<endl;
	}
};
class sub : public student
{
	float deg[10];
public:
	void set_j()
	{
		for(int i=0;i<10;i++)
		{
			cout<<"enter degree :";
			cin>>deg[i];
		}
	}
	void display_j()
	{
		for(int i=0;i<10;i++)
		{
			cout<<"enter degree :";
			cin>>deg[i];
		}
	}
};
void main()
{

	system("pause");
}