#include<iostream>
#include<string>
using namespace std;
class matrix
{
	float M[50][50],n,m;
public:
	void read()
	{
		cout<<"n :";  cin>>n;
		cout<<"m :";  cin>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<"enter your matrix :"<<endl;
				cin>>M[i][j];
			}
		}
	}
	//-------------------------------------------
	float findmax()
	{
		float max;
		max=M[0][0];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(M[i][j]>max)
				{
					max=M[i][j];
				}
			}
			return max;
	}
	//-----------------------------------------
	void display()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<" matrix :"<<M[i][j]<<endl;
			}
		}
	}//--------------------------------------------------
	friend matrix sumM(matrix A,matrix B)
	{
		matrix C;
		C.n=A.n;
		C.m=A.m;
		for(int i=0;i<A.n;i++)
			for(int j=0;j<A.m;j++)
			{
				C.M[i][j]=A.M[i][j]+B.M[i][j];
			}
			return C;
	}
	//-----------------------------------------------------
	friend float compareMax(matrix D,matrix E)
	{
		float maxEl;
		maxEl=D.findmax();
		if(E.findmax()>maxEl)
		{
			maxEl=E.findmax();
		}
		return maxEl;
	}
};
void main()
{
	matrix X,Y,Z,W;
	X.read();
	Y.read();
	Z=sumM(X,Y);
	Z.display();
	cout<<"max of X[] :"<<X.findmax()<<endl;
	cout<<"compare:"<<compareMax(X,Y)<<endl;


	system("pause");
}