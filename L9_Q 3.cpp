#include<iostream>
using namespace std;
template <class T>
class vector
{
	T V[50];
	int n;
public:
	void set()
	{
		cout<<"n:";
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>V[i];
	}
	void dis()
	{
		for(int i=0;i<n;i++)
			cout<<V[i]<<endl;
	}
	void sort()
	{
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(V[i]>V[j])
				{
					T t=V[i];
					V[i]=V[j];
					V[j]=t;
				}
	}
	void swap()
	{
		T t=V[0];
		V[0]=V[1];
		V[1]=t;
	}
	void acc(int i)
	{
		cout << "\nthe num that in this index is " << V[i-1]<<endl;
	}

};
void main()
{
	vector<float> a;
	a.set();
	cout << "\nwrite your index";
	int i;
	cin >> i;
	a.acc(i);
	a.sort();
	cout << "\nyour arr after sotring is\n";
	a.dis();

	system("pause");
}