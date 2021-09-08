#include<iostream>
#include<string>
using namespace std;
class point
{
	float x,y,z;
public:
	void set()
	{
		cout<<"x :";  cin>>x;
		cout<<"y :";  cin>>y;
		cout<<"z :";  cin>>z;
	}
	//------------------------------------------------
	float norm()
	{
		float N;
		N=sqrt((x*x)+(y*y)+(z*z));
		return N;
	}
	friend float dist(point A,point B)
	{
		float C;
		C=sqrt(pow((double)A.x-B.x,2)+pow((double)A.y-B.y,2)+pow((double)A.z-B.z,2));
		return C;
	}
	friend float maxnorm(point D,point E)
	{
		float max;
		max=D.norm();
		if(D.norm()<E.norm()){max=E.norm();}
		return max;
	}

};
void main()
{
	point P,W,S,Q,O;
	O.set();
	cout<<"norm : "<<O.norm()<<endl;
	P.set();
	W.set();
	cout<<"distance :"<<dist(P,W)<<endl;
	S.set();
	Q.set();
	cout<<"max :"<<maxnorm(S,Q)<<endl;
	system("pause");
}