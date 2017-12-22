#include<iostream>
#include<sstream>
using namespace std;
void permu(int*a,int n,int pos,bool*bol,string str)
{
    if(pos==n)
    {
        cout<<str<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
       stringstream g;
       string newi;
       g<<a[i];
       g>>newi;
       if(bol[i]==false)
       {
            bol[i]=true;
            permu(a,n,pos+1,bol,str+newi);
            bol[i]=false;

       }

    }
}
//backtracking approach
void permuback(int *a,int n,int cur)
{
    int t;
    if(cur==n-1)
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        //for(int i=cur;i<n;i++)
        /*{
            t=a[i];
           a[i]=a[cur];
           a[cur]=t;
        }*/
         return;
    }
    for(int i=cur;i<n;i++)
    {
            t=a[i];
            a[i]=a[cur];
            a[cur]=t;
            permuback(a,n,cur+1);
            t=a[i];
            a[i]=a[cur];
            a[cur]=t;
    }
}
int main()
{
    int n;
    cin>>n;
    int*a=new int[n];
    bool*bol=new bool[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        bol[i]=false;
        //permu(a,n,0,bol,"");
        permuback(a,n,0);

}
