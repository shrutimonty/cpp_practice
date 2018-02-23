#include <iostream>

using namespace std;

void swapbyvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swapref(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swappointer(int*ap,int*bp)
{
    int temp=*ap;
    *ap=*bp;
    *bp=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int *ap=&a;
    int *bp=&b;
   // swapbyvalue(a,b);
    //swapref(a,b);
   // swappointer(ap,bp);
    cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
}



