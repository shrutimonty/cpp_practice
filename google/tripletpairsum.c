#include<iostream>
using namespace std;
bool ispairsum(int*a,int n)
{
    int i=0;
    int j=n-i-1;
    while(i<n)
    {
        if(a[i]+a[j]==0)
            return true;
        else if(a[i]+a[j]<0)
        {
            i=i+1;
            continue;
        }
        else if(a[i]+a[j]>0)
        {
            j=j+1;
            continue;
        }
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int *a=int a[n];
        if(ispairsum==true)
            cout<<1;
        else
            cout<<0;
    }

}
