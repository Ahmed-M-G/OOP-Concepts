#include<iostream>
using namespace std;
class vector
{
	int V[3];
public:
	/*void set()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"V["<<i+1<<"] :";
			cin>>V[i];
		}
	}
	void display()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"V["<<i+1<<"] :"<<V[i]<<endl;
		}
	}*/
	friend istream & operator >> (istream & in,vector & a)
	{
		for(int i=0;i<3;i++)
			in>>a.V[i];
		return in;
	}
	friend ostream & operator << (ostream & out,vector & b)
	{
		for(int i=0;i<3;i++)
			out<<b.V[i];
		return out;
	}

	friend vector operator +(vector A,vector b)
	{
		vector C;
		for(int i=0;i<3;i++)
		{
			C.V[i]=b.V[i]+A.V[i];
		}
		return C;
	}
	bool operator<=(vector W)
	{
		for(int i=0;i<3;i++)
		{
			if(V[i]>W.V[i])
				return 0;
		}
		return 1;
		
	}
};
void main()
{
	vector Q1,Q2,Q3;
	cout<<"the first vector :"<<endl;
	//Q1.set();
	cin>>Q1;
	cout<<"======================================="<<endl;
	cout<<"the second vector :"<<endl;
	//Q2.set();
	cin>>Q2;
	cout<<"======================================="<<endl;
	if(Q1<=Q2)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	cout<<"======================================="<<endl;
	cout<<"sum :"<<endl;
	Q3=Q1+Q2;
	//Q3.display();
	cout<<Q3;
	cout<<"======================================="<<endl;


	system ("pause");
}