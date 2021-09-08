#include<iostream>
#include<string>
using namespace std;
class rect{
private:
	float w,h;
public:
	void read ()
	{
		cout<<"h = ";cin>>h;
		cout<<"w = ";cin>>w;
	}
	void display()
	{
		cout<<"h = "<<cout<<h<<endl;
		cout<<"w = "<<cout<<w<<endl;
	}
	float area()
	{
			return (w*h);
	}
	float circum()
	{
		return ((w+h)*2);
	}
};
void main()
{
	rect r1;
	r1.read();
	r1.display();
	cout<<"Area = "<<r1.area()<<endl;
	cout<<"circum = "<<r1.circum()<<endl;
	
	

	system("pause");
}