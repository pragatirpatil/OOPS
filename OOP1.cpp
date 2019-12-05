#include<iostream>
using namespace std;
class emp
{
 private :

      string address,name;
      int emp_id,switch1=0,x;
      long long int phoneno,count=0,dob,month,year;
      long long int sal;
 public :
      void accept();
      void display();
};
void emp::accept()
{
      cin.ignore();
      cout<< "Enter name: ";
      getline(cin,name);
      cout<<"Enter employee id: ";
      cin>>emp_id;
      cout<< "Enter phone number: ";

        do
            {   switch1=0;
                cin>>phoneno;
                if(phoneno<6000000000 || phoneno>9999999999)
                {
                    switch1=1;
                }
                if(switch1==1)
                {
                    cout<<"Invalid! "<<endl;
                    cout<<"Enter phone number:";
                }
            }while(switch1==1);

      cin.ignore();
      cout<< "Enter address: ";
      getline(cin,address);
      while(x!=3)
      {
            cout<<"Enter Choice:\n1.Date\n2.Month\n3.Year\n";
            cin>>x;
              switch(x)
              {
               case 1:    cout<< "Enter date of birth:";
                          do
                          {
                              switch1=0;
                              cin>>dob;
                              if(dob>=1 && dob<=31)
                                    {
                                        switch1=1;
                                    }
                                    if(switch1==0)
                                    {
                                        cout<<"Invalid! "<<endl;
                                        cout<<"Enter date: ";
                                    }
                            }while(switch1==0);
                            break;
                case 2:    cout<< "Enter month: ";
                           do
                          {
                              switch1=0;
                              cin>>month;
                              if(month>=1 && month<=12)
                                    {
                                        switch1=1;
                                    }
                                    if(switch1==0)
                                    {
                                        cout<<"Invalid! "<<endl;
                                        cout<<"Enter month: ";
                                    }
                            }while(switch1==0);
                            break;
                  case 3:  cout<< "Enter year: ";
                           do
                          {
                              switch1=0;
                              cin>>year;
                              if(year<=2019 && year>=1941)
                                {
                                    switch1=1;
                                }
                            if(switch1==0)
                                {
                                    cout<<"Invalid! "<<endl;
                                    cout<<"Enter Year: ";
                                }
                            }while(switch1==0);
                            break;
                    default: cout<<"Invalid";
                            break;
                 }
      }
	  cout<< "Enter bloodgroup : 1.O+ 2.A+ 3.B+ 4.AB+ 5.O- 6.A- 7.B- 8.AB-"<<endl;
      cin>>x;
      cout<< "Enter salary:"<<endl;
      cin>>sal;
}
void emp::display()
{
      cout<<"Displaying information."<<endl;
      cout<<"Name of employee is:"<<name<<endl;
      cout<<"ID of employee is:"<<emp_id<<endl;
      cout<<"Phone number of employee is:"<<phoneno<<endl;
      cout<<"Address of employee is:"<<address<<endl;
      cout<<"Date of birth of employee is:"<<dob<<"/"<<month<<"/"<<year<<endl;
      cout<<"Blood group of employee is:";
      switch(x)
      {
          case 1:cout<<"O+"<<endl;
                 break;
          case 2:cout<<"A+"<<endl;
                 break;
          case 3:cout<<"B+"<<endl;
                 break;
          case 4:cout<<"AB+"<<endl;
                 break;
          case 5:cout<<"O-"<<endl;
                 break;
          case 6:cout<<"A-"<<endl;
                 break;
          case 7:cout<<"B-"<<endl;
                 break;
          case 8:cout<<"AB-"<<endl;
                 break;
      }
      cout<<"Salary of employee is:"<<sal<<endl;
}
int main()
{
      emp s[10];
      int n, i;
      cout<<"Enter number of employees"<<endl;
      cin>>n;
      cout<<"ENTER DATA OF EMPLOYEE\n";
      for(i=0;i<n;i++)
      {
          s[i].accept();
      }
      cout<<"DISPLAYING DATA OF EMPLOYEE\n";
      for(i=0;i<n;i++)
      {
          cout<<"--------------------------------------------------------------"<<endl;
          cout<<endl;
          s[i].display();
          cout<<endl;
          cout<<"--------------------------------------------------------------"<<endl;
      }
return 0;
}

