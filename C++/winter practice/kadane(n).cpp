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
        {
            cin>>a[i];
        }
        int maxsum=a[0];
        int cursum=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>cursum+a[i])
            {
                cursum=a[i];
            }
            else
                cursum=cursum+a[i];
            if(cursum>maxsum)
                maxsum=cursum;

        }
        cout<<maxsum<<endl;





    }
}
