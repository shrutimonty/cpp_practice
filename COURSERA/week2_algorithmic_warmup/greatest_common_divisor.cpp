#include<iostream>
using namespace std;
int64_t euclid(int64_t a,int64_t b)
{

    if(b==0)
        return a;
   return euclid(b,a%b);
}
int main()
{
    int64_t a,b;
    cin>>a>>b;
    int64_t ans=euclid(a,b);
    cout<<ans<<endl;
}
