#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,pos,miss=0;
        cin>>n;
        int*a=new int[n-1];
        int*testa=new int[n];
        for(int i=0;i<n-1;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            testa[i]=i+1;
         for(int i=0;i<n-1;i++)
         {
             pos=a[i];
             testa[pos-1]=0;
         }
         for(int i=0;i<n;i++)
         {
             if(testa[i]!=0)
             {
                 miss=testa[i];
                 break;
             }
         }
         cout<<miss<<endl;



    }
}
