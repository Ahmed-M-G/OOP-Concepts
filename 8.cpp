#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class Data
{
protected:
	int a,b;
public:
	void set()
	{
		cout<<"a="; cin>>a;
		cout<<"b="; cin>>b;
	}
};
class comp : public Data
{
public:
	void display_comp()
	{
		cout<<"complex ="<<a<<"+i"<<b<<endl;
	}
};
class ratio : public Data
{
public:
	void display_ratio()
	{
		cout<<"ratio ="<<a<<"/"<<b<<endl;
	}
};
void main()
{
	comp C;
	ratio R;
	C.set();
	C.display_comp();
	R.set();
	R.display_ratio();


	system("pause");
}