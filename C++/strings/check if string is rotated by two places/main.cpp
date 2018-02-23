#include <iostream>

using namespace std;

bool clockcheck(string stra,string strb)
{
    int n=strb.length();
    string clock="";
    for(int i=2;i<n;i++)
    {
       clock+=strb[i];
    }
    clock+=strb[0];
    clock+=strb[1];
    if(clock==stra)
        return true;
    else
        return false;
}

bool anticlockcheck(string stra,string strb)
{
    int n=strb.length();
    string anticlock="";
    anticlock+=strb[n-2];
    anticlock+=strb[n-1];
     for(int i=0;i<n-2;i++)
    {
       anticlock+=strb[i];
    }
     if(anticlock==stra)
        return true;
    else
        return false;

}

int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       string stra;
       cin>>stra;
       string strb;
       cin>>strb;

       if(clockcheck(stra,strb))
         cout<<1<<endl;
       else if(anticlockcheck(stra,strb))
            cout<<1<<endl;
       else
        cout<<0<<endl;
   }
}
