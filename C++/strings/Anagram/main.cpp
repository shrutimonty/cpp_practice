#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string stra;
        cin>>stra;
        string strb;
        cin>>strb;
        bool check=false;
        int pos=0;
        int n=strb.length();
        int m=stra.length();
        bool*b=new bool[m];
        for(int i=0;i<m;i++)
           b[i]=false;
        for(int i=0;i<n;i++)
        {
            int ch=strb[i];
            for(int j=0;j<m;j++)
            {
                if(ch==stra[j])
                {
                    check=true;
                    break;
                }
            }
            if(check)
              check=false;
            else
            {
                cout<<"NO"<<endl;
                check=true;
                break;
            }


        }
        if(check!=true)
        {

            if(m==n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }
}
