#include <iostream>

using namespace std;
string duplicate(string str,int pos,string ans,bool check)
{
    if(pos==str.length()-1)
    {
        if(check)
            return ans;
        else
            return ans+str[pos];
    }

    if(str[pos]==str[pos+1])
    {
        check=true;
        return duplicate(str,pos+1,ans,check);
    }
    else
    {
        if(check)
        {
            check=false;
            return duplicate(str,pos+1,ans,check);
        }
        else
            return duplicate(str,pos+1,ans+str[pos],check);
    }
}
string recursive(string str,bool duplicate1)
{
    string ans= duplicate(str,0,"",false);
    for(int i=0;i<ans.length();i++)
    {
        if(ans[i]==ans[i+1])
        {
            duplicate1=false;
            break;
        }
    }
    if(duplicate1==true)
        return ans;
    else
        return recursive(ans,true);

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        string ans=recursive(str,true);
        cout<<ans<<endl;
    }
}
