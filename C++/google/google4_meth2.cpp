#include<iostream>
using namespace std;
void jumping(int num,int maxi)
{
    if(num>maxi)
        return;


    cout<<num<<" ";
    if(num%10==0)
        jumping(num*10+1,maxi);
    else if(num%10==9)
        jumping(num*10+8,maxi);
    else
    {
        jumping(num*10+(num%10)+1,maxi);
        jumping(num*10+(num%10)-1,maxi);
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int number_given;
        cin>>number_given;
        cout<<0<<" ";
        for(int i=1;i<10;i++)
            jumping(i,number_given);
    }
}
