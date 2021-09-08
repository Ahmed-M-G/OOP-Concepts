#include <iostream>
#include <string>
using namespace std;
struct book
{
	int id;
	float price;
};
void read(int n,book a[])
{
	for(int i=0;i<n;i++)
	{
		cout<<"book["<<i+1<<"]=";
		cin>>a[i].id;
		cout<<"price of book"<<i+1<<"=";
		cin>>a[i].price;
		cout<<"==============================\n";
	}
}
void display(int v,book a[])
{
	for(int i=0;i<v;i++)
	{
		cout<<"book["<<i+1<<"]="<<a[i].id<<endl;
		cout<<"price of book"<<i+1<<"="<<a[i].price<<endl;
	}
}
void cost(int w,book b[])
{
	int max;
	for(int i=0;i<w;i++)
	{
		max=b[0].price;
		if(max<b[i].price){max=b[i].price;}
	}
	cout<<"max:"<<max<<endl;
}
void main()
{
	int n;
	book A[100];
	cout<<"enter no of book =";
	cin>>n;
	cout<<"==============================\n";
	read(n,A);
	cost(n,A);
	cout<<"==============================\n";
	display(n,A);
	cout<<"==============================\n";

	cout<<endl;



	system("pause");






}