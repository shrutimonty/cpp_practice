#include<iostream>
using namespace std;



int64_t fibsum(int64_t fib)
{
    if(fib==0)
        return 0;
    if(fib==1)
        return 1;
    if(fib==2)
        return 2;
    int64_t* a=new int64_t [60];
    a[0]=0;
    a[1]=1;
    int64_t first=0;
    int64_t second=1;

    for(int64_t i=0;i<58;i++)
    {
        int64_t temp=first%10;
        first=second%10;
        second=(temp+second)%10;
        a[i+2]=second;
    }

    int64_t pos=(fib+2)%(60);
    if((a[pos]%10)==0)
    {
        return 9;
    }

    return (a[pos]%10)-1;

}

int main()
{
    int64_t fib;
    cin>>fib;
    cout<<fibsum(fib);
}
