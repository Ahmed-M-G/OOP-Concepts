#include<iostream>
#include<math.h>
using namespace std;
class ratio
{
	int n,d;
public:
	void read()
	{
		cout<<"n="; cin>>n;
		cout<<"d="; cin>>d;
	}
	void convert()
	{
		cout<<"dec ="<<float(n)/d<<endl;
	}
	void print()
	{
		cout<<"ratio="<<float(n)/d<<endl;
		cout<<"ratio="<<n<<"/"<<d<<endl;
	}
	void invert()
	{
		cout<<"invers ="<<d<<"/"<<n<<endl;
		cout<<"invers ="<<float(d)/n<<endl;
	}

};
void main ()
{
	ratio a;
	a.read();
	a.convert();
	a.print();
	a.invert();

	system("pause");
}