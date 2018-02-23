#include<iostream>
using namespace std;

int64_t fib_huge(int64_t fib_num,int64_t mod_num)
{

    int64_t* a=new int64_t[1000000];
    int64_t k=0;
    a[k++]=0;
    a[k++]=1;
    int64_t first=0;
    int64_t second=1;

    for(int64_t i=0;i<10000000;i++)
    {
        int64_t temp=first%mod_num;
        first=second%mod_num;
        second=(temp+second)%mod_num;
        a[k++]=second;
        if(first==0 && second==1)
        {
            k=k-2;
            break;
        }
    }

    int64_t pos=fib_num%k;

    return a[pos];
}


int main()
{
    int64_t mod_num;
    int64_t fib_num;
    cin>>fib_num>>mod_num;
    int ans=fib_huge(fib_num,mod_num);
    cout<<ans;
}
