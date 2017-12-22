#include<iostream>
using namespace std;
void maxsum(int*a,int n,int cur,int prev,int sum,int &ans)
{

   if(cur==n)
   {
       return;
   }

    if(prev==-1||a[cur]>a[prev])
    {
        if(ans<(sum+a[cur]))
            ans=sum+a[cur];
        maxsum(a,n,cur+1,cur,sum+a[cur],ans);
    }
    maxsum(a,n,cur+1,prev,sum,ans);
}

int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       int n;
       cin>>n;
       int*a=new int[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
       int ans=0;
       int prev=-1;
       maxsum(a,n,0,-1,0,ans);
       cout<<ans<<endl;


   }
}
