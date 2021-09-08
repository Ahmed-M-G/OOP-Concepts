#include<iostream>
using namespace std;
template <class T>
void swap(T A[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]>A[j])
			{
				T t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
}
void main()
{
	float A[50];
	int n;
	cout<<"n:";  cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	swap(A,n);
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;


	system ("pause");
}