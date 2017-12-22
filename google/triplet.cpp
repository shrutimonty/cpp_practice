#include<iostream>
using namespace std;
bool istriplet(int*a,int n)
{
    for(int i=0;i<n;i++)
    {
        int ele1=a[i];
        for(int j=i+1;j<n;j++)
        {
            int ele2=a[j];
            for(int k=j+1;k<n;k++)
            {
                int ele3=a[k];
                if(ele1+ele2+ele3==0)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;

    while (tc--)
    {
        int n;
        cin>>n;
        int *a=new int(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(istriplet(a,n)==true)
            cout<<1;
        else
            cout<<0;
    }
}
