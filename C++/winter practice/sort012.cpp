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
        int*a=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                count0++;
            else if(a[i]==1)
                count1++;
            else
                count2++;

        }

        for(int i=0;i<count0;i++)
            a[i]=0;
        int i=count0;
        int countie1=count1;

        while(countie1!=0)
        {
            a[i]=1;
            countie1=countie1-1;
            i++;
        }
         i=count0+count1;
         while(count2!=0)
        {
            a[i]=2;
            count2=(count2)-1;
            i++;
        }

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;


    }
}
