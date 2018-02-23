#include<iostream>
using namespace std;
int fun1(int *a)
{  int s=0;
   int sizee = sizeof(a)/sizeof(a[0]);
   //cout<<sizeof(a)/sizeof(a[0])<<endl;
   for(int i=0;i<sizee;i++)
   {
       s=s+a[i];
   }
   return s;
}
int main()
{
    int a[]={1,2,3,4,5};
    //cout<<sizeof(a)/sizeof(a[0])<<endl;
    //int sizee = sizeof(a)/sizeof(a[0]);
    int sum = fun1(a);
    cout<<sum<<endl;
}
