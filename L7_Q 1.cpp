#include<iostream>
#include<string>
using namespace std;
class dept
{
protected:
	string Dname,Pname[2];
public:
	void set_D()
	{
		cout<<"Dname :"; cin>>Dname;
		for(int i=0;i<2;i++)
		{
			cout<<"Pname :"; 
			cin>>Pname[i];
		}
	}
	void display_D()
	{
		cout<<"Dname :"<<Dname<<endl;
		for(int i=0;i<2;i++)
		{
			cout<<"Pname :"<<Pname[i]<<endl;
		}
	}
};
class part_1 :public dept
{
	float P1Score[7];
public:
	void set_P1()
	{
		set_D();
		for(int i=0;i<7;i++)
		{
			cout<<"enter Score :";
			cin>>P1Score[i];
		}
	}
	void Display_P1()
	{
		display_D();
		for(int i=0;i<7;i++)
		{
			cout<<"Score :"<<P1Score[i]<<endl;
		}

	}
	float M_sum()
	{
		float sum=0;
		for(int i=0;i<7;i++)
		{
			sum+=P1Score[i];
		}
		return sum;
	}
};
class part_2 :public dept
{
	float P2Score[10];
public:
	void set_P2()
	{
		set_D();
		for(int i=0;i<10;i++)
		{
			cout<<"enter Score :";
			cin>>P2Score[i];
		}
	}
	float F_sum()
	{
		float Fsum=0;
		for(int i=0;i<10;i++)
		{
			cout<<"M_SUM :";
			Fsum+=P2Score[i];
		}
		return Fsum;
	}
	void Display_P2()
	{
		display_D();
		for(int i=0;i<10;i++)
		{
			cout<<"Score :"<<P2Score[i]<<endl;
		}
	}
};
void main()
{
	part_1 x;
	part_2 z;
	x.set_P1();
	cout<<x.M_sum()<<endl;
	x.Display_P1();
	cout<<"============================\n";
	z.set_P2();
	cout<<z.F_sum()<<endl;
	z.Display_P2();


	system("pause");
}