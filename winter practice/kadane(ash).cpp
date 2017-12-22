#include<iostream>
#include<cmath>
using namespace std;
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
        int*b=new int [n];
        int k=0,cursum=0;


        for(int i=0;i<n;i++)
        {
            if(cursum>=0&a[i]>0)
            {
                cursum+=a[i];


            }
            if(cursum<=0&a[i]<0)
            {
              cursum+=a[i];

            }
            if(cursum>0&a[i]<0)
            {
                 b[k++]=cursum;
                 cursum=a[i];

            }
            if(cursum<0&a[i]>0)
            {
                b[k++]=cursum;
                cursum=a[i];

            }
            }
              b[k++]=cursum;
            //for(int i=0;i<k;i++)
            //cout<<b[i];

           if(k==1)
           {
               if(b[0]>0)
               cout<<b[0]<<endl;
               else if(b[0]<0)
               {
                   int maxsum=a[0];
                 for(int i=1;i<n;i++)
            {
                if(a[i]>maxsum)
                    maxsum=a[i];
            }
            cout<<maxsum<<endl;
               }
           }



            else
            {
             int bend=k-1;
             int bstart=0;

            //eliminating edge negative

            if(b[0]<0)
            {

                bstart++;
            }
            if(b[bend]<0)
            {
                bend--;

            }
            int z=bstart,sum=a[0];
            for(int i=bstart;i<=bend;i++)
            {
                if(sum<b[i])
                    sum=b[i];
            }

            while(z!=bend)
            {
                if(abs(b[z]) <= abs(b[z+1]))
                {
                    if(sum<b[z])
                        sum=b[z];
                     if(sum<b[z+1])
                        sum=b[z+1];


                     z=z+2;
                }
                else
                {
                    if(sum<b[z]+b[z+1]+b[z+2])
                        sum=b[z]+b[z+1]+b[z+2];
                    b[z+2]=b[z]+b[z+1]+b[z+2];
                    z=z+2;
                }

            }
            cout<<sum<<endl;

            }

        }
    }

