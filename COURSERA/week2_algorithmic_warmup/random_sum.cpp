#include<iostream>
using namespace std;



int64_t fibsum(int64_t fibstart,int64_t fibend)
{

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

    int64_t pos1=(fibend+2)%(60);
    int64_t pos2=(fibstart+1)%(60);

    int p=a[pos1]%10-a[pos2]%10;
    if(p<0)
    {
        return 10+p;
    }

    return (a[pos1]%10)-(a[pos2]%10);

}

int main()
{
    int64_t fibstart,fibend;
    cin>>fibstart>>fibend;
    cout<<fibsum(fibstart,fibend);
}

