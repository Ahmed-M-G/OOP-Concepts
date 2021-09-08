#include<iostream>
using namespace std;
template<class T>
T max(T A[],int n)
{
	T max=A[0];
	for(int i=0;i<n;i++)
		if(max<A[i])
			max=A[i];
	return max;
}
void main()
{
	float A[50];
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>A[i];
	cout<<"max:"<<max(A,a)<<endl;
	system("pause");
}