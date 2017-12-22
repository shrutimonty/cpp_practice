#include<iostream>
#include <algorithm>
using namespace std;
bool ispairsum(int* a,int n,int third)
{
    sort(a,a+n);

    cout<<endl;
    int l=0;
    int r=n-1;
    while(l<r)
    {
         if((third==l))
          { l++;
          continue;
          }
        if((third==r))
          { r--;
          continue;
          }
        if((a[l]+a[r])==(-a[third]))
            return true;
        else if((a[l]+a[r])<(-a[third]))
        {
            l++;
        }
        else
        {
            r--;
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
        int flag=0;
        int *a= new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {if(ispairsum(a,n,i))
            {flag=1;
             break;
            }

        }
        if(flag)
            cout<<1<<" ";
        else
            cout<<0<<" ";

    }

}
