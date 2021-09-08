#include<iostream>
#include<string>
using namespace std;
class comp;
class ratio
{
	int n,d;
public:
	void set()
	{
		cout<<"n:"; cin>>n;
		cout<<"d:"; cin>>d;
	}
	friend ratio sumR(ratio A,ratio B)
	{
		ratio C;
		C.n=A.n+B.n;
		C.d=A.d+B.d;
		return C;
	}
	friend float MaxR(comp ,ratio );
};
class comp 
{
	int r,m;
public:
	void set()
	{
		cout<<"r:"; cin>>r;
		cout<<"m:"; cin>>m;
	}
	friend comp sumC(comp A,comp B)
	{
		comp C;
		C.r=A.r+B.r;
		C.m=A.m+B.m;
		return C;
	}

};
void main()
{

	system("pause");
}