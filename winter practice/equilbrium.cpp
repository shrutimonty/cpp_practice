#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,suml=0,sumr=0;
        bool check=false;
        cin>>n;
        int*a = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            suml=0;
            sumr=0;
            for(int j=0;j<i;j++)
            {
                suml=suml+a[j];
            }
            for(int j=i+1;j<n;j++)
            {
                sumr=sumr+a[j];
            }
            if(sumr==suml)
            {
                cout<<i+1<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
            cout<<-1;

    }
}
