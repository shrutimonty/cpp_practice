#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int*a=new int [n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
           int  maxn=a[i];
            bool big=false;
            for(int j=i+1;j<n;j++)
            {
               big=false;
                if(maxn>a[j])
                    big=true;
                 else
                        break;

            }
            if(big==true)
                cout<<maxn<<" ";
        }
        cout<<a[n-1]<<endl;
    }
}
