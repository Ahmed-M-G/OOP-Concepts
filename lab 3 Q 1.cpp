#include<iostream>
#include<string>
using namespace std;
class SDate
{
	string name,address;
	struct BDate
	{
		int d,m,y;
	}T;

public:
	
	SDate(string n,string a,int D,int M,int Y)
	{
		name=n;
		address=a;
		T.d=D;
		T.m=M;
		T.y=Y;
	}
	int check()
	{

		if(1<=T.d && T.d <=31 && 1<=T.m && T.m<=12 && 1900<=T.y && T.y<=2020)
			return 1;
		else return 0;
		
	}
	void print()
	{
		cout<<"name:      "<<name<<endl;
		cout<<"address:   "<<address<<endl;
		cout<<"Birth Date:"<<"("<<T.d<<"/"<<T.m<<"/"<<T.y<<")\n";
	}
};
void main()
{
	SDate x("Ahmed Gaber ","egypt,cairo",15,2,1999);
	if(x.check()==1)
	{
		x.print();
	}
	else
	{
		cout<<"error in your Date"<<endl;
	}
	

	system("pause");
}