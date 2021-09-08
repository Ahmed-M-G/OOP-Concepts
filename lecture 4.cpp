#include<iostream>
#include<string>
using namespace std;
//copy constrctor:
class M
{
	int a ,b;
public:
	M()
	{
		a=0;
		b=0;
		cout<<a<<"    "<<b<<endl;
	}
	M(int x,int y)
	{
		a=x;
		b=y;
		cout<<a<<"    "<<b<<endl;
	}
	M(M & h)
	{
		a=h.a;
		b=h.b;
		cout<<a<<"    "<<b<<endl;
	}
};
void main ()
{
	M A,B(1,2),C(B);

	system("pause");
}

//------------------------------------------------------
/*class S
{
	int m;
public:
	S(int a)
	{
		m=a;
	}
	~S()
	{
		cout<<"m: "<<m<<"the end"<<endl;
	}
};
void main()
{
	S b(5),c(6);
	
	

	system("pause");
}*/