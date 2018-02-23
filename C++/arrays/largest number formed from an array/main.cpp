#include <iostream>
#include<sstream>
/*problem with comparison of 30 and 300 and similary 89 and 899*/
using namespace std;
bool islarge(int a,int b)
{
   string stra,strb;
   stringstream s;
   s<<a;
   s>>stra;
   stringstream g;
   g<<b;
   g>>strb;

   int i,k=0;
   for(i=0;(i<stra.length())&(k<strb.length());i++,k++)
   {

      if(stra[i]>strb[k])
         return true;
       if(stra[i]==strb[k])
          continue;
       else
          return false;
   }
   if(i==stra.length())
         return false;
    if(k==strb.length())
         return true;
}

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
        /*bool check=islarge(309,303);
        if(check)
            cout<<"true";
        else
            cout<<"false";*/

       for(int i=0;i<n-1;i++)
        {

            for(int j=0;j<n-i-1;j++)
            {

                if(!islarge(a[j],a[j+1]))
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";


    }
}
