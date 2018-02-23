#include<iostream>
using namespace std;
int main()
{
    int tc;

    cin>>tc;
    while(tc--)
    {
        int n;
        int comp;
        int flag=0;
        cin>>n;
        int*a= new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {  comp=a[i];
           for(int j=n-1;j>i;j--)
           {
               if(a[j]>=comp)
               { int m=j-i;
                 if(m>flag)
                    flag=m;
                    break;
               }
           }


        }
        cout<<flag<<endl;
    }
}
