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
int main()
{

        int dicnum;
        cin>>dicnum;



        string dic[dicnum];

        for(int i=0;i<dicnum;i++)
        {
            cin>>dic[i];

        }

        int large;
        large=largest(dic,dicnum);
        string largest1=dic[large];

        cout<<largest1;
}
