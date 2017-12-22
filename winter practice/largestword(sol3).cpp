#include<iostream>
using namespace std;
bool isfind(string tofind,string teststring)
{
    int pos=0;
    bool check=false;
    for(int i=0;i<tofind.length();i++)
    {
        check=false;
        for(int j=pos;j<teststring.length();j++)
        {

            if(tofind[i]==teststring[j])
            {
                pos=j+1;
                check=true;
                break;
            }

        }
        if(!check)
        {
            return false;
        }
    }
     if(check)
        return true;





}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string*dic=new string[n];
        for(int i=0;i<n;i++)
            cin>>dic[i];
        string teststring;
        cin>>teststring;
        int pos,length=0;
        bool check;
        for(int i=0;i<n;i++)
        {
            check=isfind(dic[i],teststring);

            if(check==true & length<dic[i].length())
            {
                pos=i;
                length=dic[i].length();
            }
        }
        cout<<dic[pos]<<endl;
    }
}
