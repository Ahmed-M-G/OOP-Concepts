#include<iostream>
using namespace std;
class dist
{
	int feet,inche;
public:
	dist()
	{
		feet=0;
		inche=0;
	}
	dist(int f,int i)
	{
		feet=f;
		inche=i;
	}
	friend istream & operator >>(istream & in,dist & x)
	{//áíå áÇÒã ÇÑÊÈ ÇáÈÑÇãíÊÑ íÚäì ÇÍØ ÇáÇÓÊÑíã Ýì ÇáÇæá 
		in>>x.feet>>x.inche;
		return in;
	}
	friend ostream & operator <<(ostream & out,dist & s)
	{
		out<<"feet :"<<s.feet<<endl<<"inches :"<<s.inche<<endl;
		return out;
	}
};
void main ()
{
	dist d1(11,10),d2(5,11),d3;
	cin>>d3;
	cout<<d3;
	


	system ("pause");
}