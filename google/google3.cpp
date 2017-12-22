
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
      int sizee=2*n+2;
      int ans1=-1,ans2=-1;


      int*a=new int[sizee];
      for(int i=0;i<sizee;i++)
      {
          cin>>a[i];

      }
      for(int i=0;i<sizee;i++)
      {  bool check=true;
      if(a[i]==-1)
        continue;
          for(int j=i+1;j<sizee;j++)
          {
              if(i==j)
                continue;
              if(a[i]==a[j])
                {check=false;
                 a[j]=-1;
                break;
                }
          }
         if(check==true)
          {
              if(ans1==-1)
                ans1=a[i];
              else
              {
                  if(ans1>a[i])
                  {
                      ans2=ans1;
                      ans1=a[i];

                  }
                  else
                    ans2=a[i];
              }
          }
      }


        cout<<ans1<<" "<<ans2<<endl;
    }
}
