#include<iostream>
using namespace std;
int money_change(int cash,int deno)
{
    if(cash<10)
    {
        if(cash>=5)
            return money_change(cash-5,deno+1);
        else
        {
            if(cash>1)
               return money_change(cash-1,deno+1);
            else if(cash==1)
                return deno+1;
            else if(cash==0)
                return deno;
        }
    }
    return money_change(cash-10,deno+1);
}

int main()
{
    int cash;
    cin>>cash;
    int ans=money_change(cash,0);
    cout<<ans;
}
