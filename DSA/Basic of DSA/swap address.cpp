#include<iostream>
using namespace std;
void swapadd(int*a,int*b)
{
    int*temp=a;
    a=b;
    b=temp;
}
void swapbydp(int**a,int**b)
{
    int*temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int*ap=&a;
    int*bp=&b;
    int**app=&ap;
    int**bpp=&bp;
    cout<<"ap = "<<ap<<" "<<"bp = "<<bp<<endl;
    //swapadd(ap,bp);
    swapbydp(app,bpp);
    cout<<"AFTER "<<"ap = "<<ap<<" "<<"bp = "<<bp<<endl;



}

