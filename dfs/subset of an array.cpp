#include<iostream>
#include<sstream>
using namespace std;
void subset(int*a,int n,int pos,int*b,int k)
{

    if(pos==n)
    {
        for(int i=0;i<k;i++)
        cout<<b[i]<<" ";
        cout<<endl;
        return;
    }
    b[k]=a[pos];
    subset(a,n,pos+1,b,k+1);
    b[k]=a[pos];
    subset(a,n,pos+1,b,k);


}
void subsetbool(int*a,int n,int pos,bool*bol)
{
   if(pos==n)
   {
        for(int i=0;i<n;i++)
        {
            if(bol[i]==true)
            {
                cout<<a[i]<<" ";
            }

        }
     cout<<endl;
     return;
   }

    bol[pos]=false;
    subsetbool(a,n,pos+1,bol);
    bol[pos]=true;
    subsetbool(a,n,pos+1,bol);


}
void chararray(char *a,int n,int pos,string str)
{
    if(pos==n)
    {
        cout<<str<<endl;
        return;

    }
    chararray(a,n,pos+1,str+a[pos]);
    chararray(a,n,pos+1,str);
}
void arstr(int*a,int n,int pos,string str)
{
    if(pos==n)
    {
        cout<<str<<endl;
        return;
    }
    stringstream g;
    string newi;
    g<<a[pos];
    g>>newi;

    arstr(a,n,pos+1,str+newi);
    arstr(a,n,pos+1,str);
}

int main()
{
    int n;
    cin>>n;
    int*a=new int [n];
    char*achar=new char[n];
    int*b=new int[n];
    bool*bol=new bool[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //for(int i=0;i<n;i++)
        //cin>>achar[i];
    for(int i=0;i<n;i++)
        bol[i]=false;
    //subset(a,n,0,b,0);
   //subsetbool(a,n,0,bol);
   //chararray(achar,n,0,"");
   arstr(a,n,0,"");

}
