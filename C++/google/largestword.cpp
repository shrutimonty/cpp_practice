#include<iostream>
using namespace std;
int largest(string str[],int m)
{
    int high=0,pos=0;
    for(int i=0;i<m;i++)
    {
        if(high<str[i].length())
        {
            high=str[i].length();
            pos=i;
        }


    }
    return pos;
}
bool isfind(string largest,string teststring)
{
    int m=largest.length();
    int n= teststring.length();
    int pos;
    if(n<m)
        return false;
    if(teststring.find(largest)!=-1)
        return true;
    if(teststring.find(largest[0])==-1)
        return false;
    else
    {
        pos=teststring.find(largest[0]);
        int init=pos;
        pos++;
        for(int i=1;i<largest.length();i++,pos++)
        {
            if(teststring[pos]==largest[i])
                continue;
            else
            {


                string bacha=largest.substr(i);

                int leni=i;
                string kucha=teststring.erase(init,leni);

                if(kucha.find(bacha)!=-1)
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

        p=dicnum;

        string dic[dicnum];

        for(int i=0;i<dicnum;i++)
        {
            cin>>dic[i];

        }
         string teststring;
         cin>>teststring;

        int large;
        bool check;
        while(p--)
        {

        large=largest(dic,dicnum);

        string largest= dic[large];
        check= isfind(largest,teststring);
        if(check)
        {
            cout<<largest<<endl;
            break;
        }

        for(int i=large;i<dicnum-1;i++)
        {
            dic[i]=dic[i+1];

        }
        dicnum=dicnum-1;

        }




    }
}
