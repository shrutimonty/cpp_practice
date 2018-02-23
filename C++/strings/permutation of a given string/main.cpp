#include <iostream>

using namespace std;

void permu(string str,int cur,bool*b,int n,string ans)
{
    if(cur==n)
    {
        cout<<ans<<" ";

        return;
    }

    for(int i=0;i<n;i++)
    {
        if(b[i]==false)
        {
            b[i]=true;
            //ans+=str[i];
            permu(str,cur+1,b,n,ans+str[i]);
            b[i]=false;

        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        int n=str.length();
        bool*b=new bool[n];
        for(int i=0;i<n;i++)
            b[i]=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(str[j]>str[j+1])
                {
                    char temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;

                }
            }
        }
        permu(str,0,b,n,"");
        //cout<<endl;
    }
}
