#include<iostream>
using namespace std;
class complex
{
	float r,n;
public:
	/*void set()
	{
		cout<<"r :";cin>>r;
		cout<<"n :";cin>>n;
	}
	//---------------------------------------------------------
	void display()
	{
		cout<<"r :"<<r<<endl;
		cout<<"n :"<<n<<endl;
	}*/
	//----------------------------------------------------------
	friend istream & operator >> (istream & in,complex & a)
	{
		in>>a.n>>a.r;
		return in;
	}
	friend ostream & operator << (ostream & out,complex & b)
	{
		out<<b.n<<endl<<b.r<<endl;
		return out;
	}
	friend complex operator*(complex a,complex b)
	{
		complex c;
		c.r=a.r*b.r;
		c.n=a.n*b.n;
		return c;
	}
	//---------------------------------------------
	void operator +=(complex s)
	{
		r=r+s.r;
		n=n+s.n;
	}
	//-------------------------------------------------
	int operator ==(complex s)
	{
		/*if(r==s.r && n==s.n)
			return 1;
		else
			return 0;*/
		return(r==s.r && n==s.n);
	}



};
void main()
{
	complex c1,c2,c3;
	//c1.set();
	cin>>c1;
	cout<<"==============================================="<<endl;
	//c2.set();
	cin>>c2;
	cout<<"==============================================="<<endl;
	if(c1==c2)
		cout<<"true "<<endl;
	else
		cout<<"false "<<endl;
	cout<<"======================================"<<endl;
	c3=c1*c2;
	cout<<"c1 * c2 :"<<endl;
	//c3.display();
	cout<<c3;
	cout<<"==============================================="<<endl;
	c1+=c2;
	cout<<"c1 +=c2 :"<<endl;
	//c1.display();
	cout<<c1;
	cout<<"==============================================="<<endl;


	system ("pause");
}