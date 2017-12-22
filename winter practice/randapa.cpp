#include<iostream>
using namespace std;
int findwa(string strmain,string strfin)
{
    int found,pos;
    bool check=false,isfind;
    for(int i=0;(i<strmain.length());i++)
    {
        isfind=true;
        if((strmain[i]==strfin[0])&&(check==false))
        {
            pos=i+1;
            found=i;
            for(int j=1;j<strfin.length();j++,pos++)
            {
                if(strmain[pos]!=strfin[j])
                {
                    isfind=false;
                    break;
                }
            }

            if(isfind==true)
            {
                return found;
                check=true;
            }
        }
    }
    if(check==false)
    {
        return -1;
    }
}
int findwachar(string strmain,char ch)
{
    bool check=false;
    for(int i=0;i<strmain.length();i++)
    {
        if(ch==strmain[i])
        {
            check=true;
            return i;
        }
        if(check==false)
            return -1;


    }
}
string substri(string strmain,int index)
{
    string store="";
    int j=0;


    for(int i=index;i<strmain.length();i++,j++)
    {
        store+=strmain[i];

    }

    return store;
}
bool checkstring(string largest, string teststring)
{
   int m=largest.length();
    int n= teststring.length();
    int pos;

    if(n<m)
        return false;

    if(findwa(teststring,largest)!=-1)
        return true;
    if(findwachar(teststring,largest[0])==-1)
        return false;
    else
    {
        pos=findwachar(teststring,largest[0]);
        int init=pos;
        pos++;
        for(int i=1;i<largest.length();i++,pos++)
        {
            if(teststring[pos]==largest[i])
                continue;
            else
            {


                string bacha=substri(largest,i);

                int leni=i;
                string kucha=teststring.erase(init,leni);

                if(findwa(kucha,bacha)!=-1)
                    return true;
                else
                    return false;
                            }
        }


    }

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int dicnum,p,n;
        cin>>dicnum;
        bool check;

        int pos;

        string* dic = new string[dicnum];

        for(int i=0;i<dicnum;i++)
        {
            cin>>dic[i];

        }
         string teststring;
         cin>>teststring;
         int length=0;
         for(int i=0;i<dicnum;i++)
         {
             check= checkstring(dic[i],teststring);

             if(check==true&&(length<(dic[i].length())))
             {
                 length=dic[i].length();
                 pos=i;

             }
         }
         cout<<dic[pos];
}
}
