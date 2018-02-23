#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,pos;
        cin>>n;
        int*a=new int[n-1];
        for(int i=0;i<n-1;i++)
            cin>>a[i];
        sort(a,a+n-1);
        cout<<a[0];
        if(a[0]!=1)
            cout<<1<<endl;
        else if(a[n-2]==n-1)
            cout<<n<<endl;
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(a[i]!=a[i-1]+1)
                {
                    pos=(a[i-1]+1);
                    break;
                }


            }
            cout<<pos<<endl;
        }




    }
}
