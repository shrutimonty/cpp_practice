#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int64_t n;
    cin>>n;
    int64_t* ad_profit=new int64_t[n];
    int64_t* click_profit=new int64_t[n];
    for(int64_t i=0;i<n;i++)
        cin>>ad_profit[i];
    for(int64_t i=0;i<n;i++)
        cin>>click_profit[i];
    sort(ad_profit,ad_profit+n);
    sort(click_profit,click_profit+n);
    int64_t mul=0;
    for(int64_t i=0;i<n;i++)
    {
        mul=mul+ad_profit[i]*click_profit[i];
    }
    cout<<mul;
}
