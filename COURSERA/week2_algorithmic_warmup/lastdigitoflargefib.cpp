#include<iostream>
using namespace std;

int main()
{
    int64_t n;
    cin>>n;
    int* fiba= new int[n+1];

    fiba[0]=0;
    if(n==0)
        cout<<0;
    else
    {
       fiba[1]=1;
       if(n==1)
       {
           cout<<1;
       }

       else
       {
            for(int i=2;i<n+1;i++)
            {
                fiba[i]=(fiba[i-1]+fiba[i-2])%10;
            }

            cout<<fiba[n];


       }
    }




}

