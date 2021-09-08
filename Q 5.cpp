#include<iostream>
using namespace std;
class matrix
{
	float M[50][50];
	static int n,m;
public:
	/*void set()
	{
		cout<<"n :"; cin>>n;
		cout<<"m :"; cin>>m;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cout<<"enter the matrex :"<<endl;
				cout<<"M[][]";
				cin>>M[i][j];
			}
	}*/
	void display()
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cout<<"enter the matrex :"<<endl;
				cout<<"M[][] :"<<M[i][j]<<endl;
			}
	}
	//------------------------------------------------------
	friend istream & operator >> (istream & in,matrix & a)
	{
		cout<<"enter size\n";
		in>>a.n>>a.m;
		for(int i=0;i<a.n;i++)
			for(int j=0;j<a.m;j++)
				in>>a.M[i][j];
		return in;
	}
	friend ostream & operator << (ostream & out,matrix & a)
	{
		for(int i=0;i<a.n;i++)
			for(int j=0;j<a.m;j++)
				out<<a.M[i][j]<<endl;
		return out;
	}
	matrix operator + (matrix x)
	{
		matrix s;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				s.M[i][j]=M[i][j]+x.M[i][j];
			}
			return s;
	}
	bool operator==(matrix W)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(M[i][j]!=W.M[i][j])
					return false;
				
			}
			return true;
	}

};

int matrix::m;
int matrix::n;


void main()
{
	matrix m1,m2,m3;
	cout<<"the first matrix\n";
	//m1.set();
	cin>>m1;
	
	cout<<"======================================="<<endl;
	cout<<"the first matrix\n";
	//m2.set();
	cin>>m2;
	cout<<"======================================="<<endl;
	cout<<"sum : \n";
	m3= m1 + m2;
	
	m3.display();
	//cout<<m3;
	cout<<"======================================="<<endl;
	if(m1==m2)
		cout<<"true \n";
	else
		cout<<"false \n";
	cout<<"======================================="<<endl;

	system ("pause");
}