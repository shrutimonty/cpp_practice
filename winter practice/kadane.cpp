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
        int maxsum=a[0],sum=0,pos1=0,pos2=0;

        for(int x=1;x<=n;x++)
        {

            for(int j=0;j<n+1-x;j++)
            {
                sum=0;
                int i=j;
                int p=x;
                while(p!=0)
                {
                    sum=sum+a[i];
                    p=p-1;
                    i=i+1;
                }

                if(sum>maxsum)
                {
                    pos1=j;
                    pos2=i;
                    maxsum=sum;

                }



            }
        }
        cout<<maxsum<<" "<<pos1<<" "<<pos2<<" "<<a[pos2-1]<<endl;
    }
}
