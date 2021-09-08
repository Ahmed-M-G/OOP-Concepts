#include<iostream>
#include<math.h>
using namespace std;
class vector
{
	float a[100];
	int n;
public:
	void read()
	{
		cout<<"n=";  cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"a["<<i+1<<"]=";
			cin>>a[i];
		}
	}
	//------------------------------------------------
	void sort()
	{
		float temp;
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int k=0;k<n;k++)
			cout<<a[k]<<"  "<<endl;
		}
	//-----------------------------------------------------------------
	void maxmum ()
	{
		float max;
		max=a[0];
		for(int i=0;i<n;i++)
		{
			if(max<a[i])
			{
				max=a[i];	
			}
		}
		cout<<"max ="<<max<<endl;
	}

};
void main()
{
	vector v;
	v.read();
	v.sort();
	v.maxmum();


	system("pause");
}