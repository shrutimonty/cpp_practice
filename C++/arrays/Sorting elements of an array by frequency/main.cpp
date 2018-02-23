#include <iostream>
#include<algorithm>

using namespace std;

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

         int**b=new int* [2];
         for(int i=0;i<2;i++)
             b[i]=new int[n];

         sort(a,a+n);
         int count=1;
         int k=0,i=0;
         b[0][k]=a[0];
         while(i<n)
         {


            if(i==n-1)
            {
                b[1][k]=count;

            }
            if(a[i]==a[i+1])
            {
                count++;
                i=i+1;

            }
            else
            {
                b[1][k]=count;
                k=k+1;
                b[0][k]=a[i+1];
                i=i+1;
                count=1;
            }


         }
        /* for(int i=0;i<2;i++)
         {
             for(int j=0;j<k;j++)
                cout<<b[i][j]<<" ";
               cout<<endl;
         }*/

         for(int i=0;i<k-1;i++)
         {
             for(int j=0;j<k-i-1;j++)
             {
                 if(b[1][j]<b[1][j+1])
                 {
                    int  temp=b[1][j];
                     b[1][j]=b[1][j+1];
                     b[1][j+1]=temp;
                     temp=b[0][j];
                     b[0][j]=b[0][j+1];
                     b[0][j+1]=temp;
                 }
             }
         }
         /*for(int i=0;i<2;i++)
         {
             for(int j=0;j<k;j++)
                cout<<b[i][j]<<" ";
               cout<<endl;
         }*/
         for(int j=0;j<k;j++)
         {
             int times=b[1][j];
             while(times!=0)
             {
                 cout<<b[0][j]<<" ";
                 times--;
             }
         }
         cout<<endl;






    }
}
