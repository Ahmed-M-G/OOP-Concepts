#include<iostream>
#include<math.h>
#include<string>
using namespace std;
/*class A
{ 
	int a,b;
public:
	void read()
	{
		cout<<"a="; cin>>a;
		cout<<"b="; cin>>b;
		cout<<"---------------------------------------------"<<endl;
	}
	void display()
	{
		cout<<"a==="<<a<<endl;
		cout<<"b==="<<b<<endl;
	}
	A()
	{
		a=b=0;
		//cout<<"hello\n---------------------------------------------------\n";
	}
	A(int x,int y)
	{
		a=x; b=y+2;
		//cout<<"hello\n---------------------------------------------------\n";
		cout<<a<<b<<endl;
	}
};*/
//-----------------------------------------------------------------------------------------------------------------------------------
/*class vector
{
	int V[5];
public:
	vector()
	{
		for(int i=0;i<5;i++)
		{
			V[i]=0;
			cout<<V[i]<<endl;
		}
	}
	vector(int x)
	{
		for(int i=0;i<5;i++)
		{
			V[i]=x*i;
			cout<<V[i]<<endl;
		}
	}
	vector(int x,int y)
	{
		for(int i=0;i<5;i++)
		{
			V[i]=x*y;
			cout<<V[i]<<endl;
		}
	}

};*/
class ratio
{
	int n,r;
public:
	ratio()
	{
		n=0;
		r=1;
		cout<<n<<"-----------------------"<<r<<endl;
	}
	ratio(int a)
	{
		n=a;
		r=a+2;
		cout<<n<<"-----------------------"<<r<<endl;
	}
	ratio(int c,int w)
	{
		n=c;
		r=w;
		cout<<n<<"-----------------------"<<r<<endl;
	}

};
void main ()
{
	/*A B(5,6);
	s.read();
	s.display();*/
	//------------------------------------
	//vector s(2,3);

	ratio x ,y(2),z(5,2);



	system("pause");
}