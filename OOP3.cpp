#include<iostream>
using namespace std;
class shape
{
	protected:
	double x,y;
};
class derived1:public shape
{
	public:
	void get_data()
	{
		cout<<"Enter two values to calculate the area"<<endl;
		cin>>x;
		cin>>y;
	}
};
class derived2:public derived1
{
	double area;
	public:
		void disp_data()
		{
			get_data();
			cout<<"Data entered is as follows:-"<<endl;
			cout<<x<<" "<<y<<endl;
		}
		void Area_rectangle()
		{
			area=x*y;
			cout<<"AREA OF RECTANGLE IS "<<area<<endl;
		}
		void Area_triangle()
		{
			area=(0.5*x*y);
			cout<<"AREA OF THE TRIANGLE IS "<<area<<endl;
		}
};
int main()
{
	int x;
	char ch;
	derived2 d2;
	do
	{
		d2.disp_data();
		cout<<"ENTER THE SHAPE OF THE FIGURE YOU WANT TO CALCULATE AREA OF"<<endl<<"1.RECTANGLE 2.TRIANGLE"<<endl;
		cin>>x;
		switch(x)
		{
		case 1:
			d2.Area_rectangle();
			break;
		case 2:
			d2.Area_triangle();
			break;
		default:
			cout<<"INVALID CHOICE"<<endl;
			break;
		}
	cout<<"DO YOU WANT TO FIND AREA OF ANOTHER SHAPE(Y/N)"<<endl;
	cin>>ch;
	}while(ch=='y'||ch=='Y');
return 0;
}

