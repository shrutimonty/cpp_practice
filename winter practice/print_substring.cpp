#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1[1000];
    int k=0;
    int count[100],m;
    m=s.length();
    for(int i=0;i<m-1;i++)
    {
        string sub = s.substr(i,2);
        int pos=-1;
        for(int j=0;j<k;j++)
        {
            if(s1[j]==sub)
            {
                pos=j;
                break;
            }
        }
        if(pos==-1)
        {
            s1[k]=sub;
            count[k]=1;
            k++;
        }
        else
        {
            count[pos]++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<s1[i]<<" "<<count[i]<<endl;
    }

}
