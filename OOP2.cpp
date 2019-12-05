#include<iostream>
using namespace std;
class complex
{
private:
	int a,b;
public:
	complex(int x,int y)
	{
		a=x;
		b=y;
	}
	complex(int k)
	{
		a=k;
		b=0;
	}
	complex()
	{	
		a=0;
		b=0;
	}
	complex operator +(complex c)
	{
		complex temp;
		temp.a = a+c.a;
		temp.b = b+c.b;
		return(temp);
	}
	complex operator *(complex c)
	{
		complex temp;
		temp.a=(a*(c.a))-(b*(c.b));
		temp.b=(a*(c.b))+(b*(c.a));
		return(temp);
	}
	friend ostream& operator<<(ostream&dout,complex &c);
	friend istream& operator>>(istream&din,complex &c);
	void read()
	{
		cout<<"ENTER THE REAL PART:"<<endl;
		cin>>a;
		cout<<"ENTER THE IMAGINARY PART:"<<endl;
		cin>b;
	}
	void display()
	{
		cout<<"COMPLEX NUMBER IS "<<a<<" + i"<<b<<endl;
	}
};
ostream& operator<<(ostream&dout,complex &c)
{
	dout<<c.a<<"+i"<<c.b<<endl;
	return(dout);
}
istream& operator>>(istream&din,complex &c)
{
	din>>c.a>>c.b;
	return(din);
}
int main()
{
	complex c1,c2,c3,c4;
	cout<<"ENTER THE FIRST COMPLEX NUMBER"<<endl;
	cin>>c1;
	cout<<"ENTER THE SECOND COMPLEX NUMBER"<<endl;
	cin>>c2;
	cout<<"COMPLEX NUMBERS ARE "<<endl;
	cout<<c1;
	cout<<c2;
	c3=c1+c2;
	c4=c1*c2;
	cout<<"ADDITION OF COMPLEX NUMBER IS "<<endl;
	cout<<c3;
	cout<<"MULTIPLICATION OF COMPLEX NUMBER IS "<<endl;
	cout<<c4;
	return 0;
}
