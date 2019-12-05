#include<iostream>
using namespace std;

template<typename T>						//implementing class template
class sort
{
private:
  T a[];
  int n;
public:
  void accept();
  void selection_sort();
  void display();
};

template <typename T>						//implementing function template to accept integer or float array according to users choice
void sort<T>:: accept()
{
  cout<<"Enter no. of elements:\n";
  cin>>n;
  cout<<"Enter the Elements\n";
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
}

template <typename T>						//implementing function template to sort the input elements using selection sort
void sort<T>:: selection_sort()
{
  T temp;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
         }
      }
   }
}

template <typename T>					//implementing function template to display the integer or float elements sorted list
void sort<T>:: display()
{
   for(int i=0;i<n;i++)
  {
      cout<<a[i]<<"\n";
  }
}


int main()
{
  int x;char c;
  sort<int>arr1;						//create int object of the class
  sort<float>arr2;						//create float object of the class

  cout<<"*****SELECTION SORT*******\n";
  do
  {
   cout<<"Sorting of Integer and Float array"<<endl<<"Enter : "<<endl;
   cout<<"1.For Int array"<<endl;
   cout<<"2.For Float array"<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>x;
   switch(x)
   {
   case 1:								//calling of three functions for integer choice
   arr1.accept();
   cout<<endl<<"Elements are:"<<endl;
   arr1.display();
   arr1.selection_sort();
   cout<<endl<<"Sorted elements are:"<<endl;
   arr1.display();
   break;

   case 2:								//calling of three functions for integer choice
   arr2.accept();
   cout<<endl<<"Elements are:"<<endl;
   arr2.display();
   arr2.selection_sort();
   cout<<endl<<"Sorted elements are:"<<endl;
   arr2.display();
   break;

  default:
    cout<<endl<<"Invalid Choice"<<endl;
    break;

   }

   cout<<"\n Do you want to continue (Y/N)";
   cin>>c;
   }while(c=='y'||c=='Y');

   cout<<"Thank You "<<endl;
return 0;
}
