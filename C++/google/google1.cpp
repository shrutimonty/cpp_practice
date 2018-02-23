#include<iostream>
using namespace std;
int main()
{
    int tcc;
    cin>>tcc;
    while(tcc--)
    {
        int n,s,sum=0;
         cin>>n;
        cin>>s;
        int *a=new int[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool check=false;
        for(int i=0;i<n;i++)
        {
            if(check)
                break;
            sum=a[i];
            if(sum==s)
              {
                  cout<<(i+1)<<" "<<(i+1)<<endl;
                  check=true;
                    break;
              }
            if(sum>s)
            {
               continue;
            }
            for(int j=i+1;j<n;j++)
            {
              sum+=a[j];
              if(sum==s)
              {
                  cout<<(i+1)<<" "<<(j+1)<<endl;
                  check=true;
                    break;
              }
              if(sum>s)
              {
                  break;
              }
            }


        }
        if(!check)
            cout<<"-1"<<endl;
    }
}
