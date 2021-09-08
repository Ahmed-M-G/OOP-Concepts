#include<iostream>
using namespace std;
class ratio
{
	int n,d;
public:
	/*void set()
	{
		cout<<"n :"; cin>>n;
		cout<<"d :"; cin>>d;
	}
	//------------------------------------------------
	void display()
	{
		cout<<"n :"<<n<<endl;
		cout<<"d :"<<d<<endl;
	}*/
	friend istream & operator >>(istream & in,ratio & s)
	{
		in>> s.n>>s.d;
		return in;
	}
	friend ostream & operator <<(ostream & out,ratio & x)
	{
		out<<"n :"<<x.n<<endl<<"d :"<<x.d<<endl;
		return out;
	}
	//------------------------------------------------
	friend ratio operator /(ratio a,ratio b)
	{
		ratio c;
		c.n=a.n*b.d;
		c.d=a.d*b.n;
		return c;
	}
	//-----------------------------------------------------
	ratio operator -()
	{
		n=-n;
		//d=-d;
		return *this;
	}
	//-----------------------------------------------
	void operator *=(ratio x)
	{
		n=n*x.n;
		d=d*x.d;
	}
	//--------------------------------------------
	int operator !=(ratio s)
	{
		if(n!=s.n || d!=s.d)
			return 1;
		else
			return 0;
		//return(n!=s.n || d!=s.d);
	}
	/*friend ratio operator +(ratio u ,ratio t)
	{//áíå ÇáÞíãÉ ÈÊØáÚ ÛáØ 
		ratio f;
		f.n=(u.n*t.d)+(t.n*u.d);
		f.d=u.d*t.d;
		return f;
	}*/
};
void main()
{

	ratio r1,r2,r3;
	cout<<"enter the ratio NO for r1:"<<endl;
	//r1.set();
	cin>>r1;
	cout<<"======================================"<<endl;
	cout<<"enter the ratio NO for r2 :"<<endl;
	//r2.set();
	cin>>r2;
	cout<<"======================================"<<endl;
	if(r1!=r2)
		cout<<"true"<<endl;
	else
		cout<<"false "<<endl;
	cout<<"======================================"<<endl;
	r3=r1/r2;
	cout<<"Dividing :"<<endl;
	//r3.display();
	cout<<r3;
	cout<<"======================================"<<endl;
	cout<<"-r1 :";
	-r1;
	//r1.display();
	cout<<r1;
	cout<<"======================================"<<endl;
	r1 *=r2;
	cout<<" r1*= :"<<endl;
	//r1.display();
	cout<<r1;
	cout<<"======================================"<<endl;
	/*r3=r1+r2;
	cout<<"sum :"<<endl;
	r3.display();
	cout<<"======================================"<<endl;*/


	system ("pause");
}