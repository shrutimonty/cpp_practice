#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int64_t mul1=0,mul2=0;
    int64_t*a=new int64_t[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int p=0;
    for(int i=0;i<n;i++)
    {
        if(mul1<a[i])
        {
             mul1=a[i];
             p=i;
        }

    }
   //cout<<mul1<<endl;


      for(int i=0;i<n;i++)
    {
        if(mul2<a[i] & p!=i)
            mul2=a[i];
    }
    int64_t ans= mul1*mul2;
    cout<<ans<<endl;

}
