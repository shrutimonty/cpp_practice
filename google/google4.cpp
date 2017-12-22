#include<iostream>
using namespace std;
bool isjumpin(int num)
{
   int mod1,mod2;
   if(num/10==0)
    return true;
    while(num!=0&&num>9)
    {
        mod1=num%10;
        num=num/10;
        mod2=num%10;
        if((mod2!=mod1+1)&&(mod2!=mod1-1))
        {
                return false;
        }

    }
   return true;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num;
        cin>>num;
        for(int i=0;i<=num;i++)
        {
            if(isjumpin(i)==true)
                cout<<i<<" ";
        }

    }

}
