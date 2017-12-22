#include<iostream>
using namespace std;
void jumpin(int n,int dig,int mnum)
{

    if(mnum>n)
        return;
     cout<<mnum<<" ";
    if(dig==0)
    {
        jumpin(n,1,mnum*10+1);
    }
    else if(dig==9)
    {
        jumpin(n,8,mnum*10+8);
    }
    else
    {
        jumpin(n,dig-1,mnum*10+dig-1);
        jumpin(n,dig+1,mnum*10+dig+1);

    }



}
int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n;
        cin>>n;
        cout<<0<<" ";
        for(int i=1;i<10;i++)
        jumpin(n,i,i);

    }
}
