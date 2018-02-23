#include<iostream>
using namespace std;
int sum(int*a,int n,int pos,int*b,int &ans)
{
   if(pos==0)
   {
       return a[0];
   }
   int inter=0;
   for(int i=pos-1;i>=0;i--)
   {
       if(a[i]<a[pos])
       {
          if(b[i]==0)
            b[i]=sum(a,n,i,b,ans);
       }
       if(inter<b[i])
        inter=b[i];
   }


   return inter+a[pos];
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int nouse;
        int*a=new int[n];
        int*b=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
         for(int i=0;i<n;i++)
            b[i]=0;
        int ans=0,maxsum=0;
        for(int i=n-1;i>=0;i--)
        {
           nouse=sum(a,n,i,b,ans);

           //cout<<nouse;
           if(nouse>maxsum)
             maxsum=nouse;
        }

        cout<<maxsum<<endl;
    }
}
