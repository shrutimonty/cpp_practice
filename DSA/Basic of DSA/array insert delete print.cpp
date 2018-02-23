#include<iostream>
using namespace std;
void insert(int*a,int &n,int pos,int x)
{
    if(pos==n-1)
    {
        int *b=new int [2*n];
        for(int i=0;i<n;i++)
            b[i]=a[i];
        n=2*n;
        a[++pos]=x;
    }
    else
        a[++pos]=x;
}
int main()
{
    int*a=new int[10];
    int n=10;
    insert(a,n,-1,2);
    for(int i=0;i<pos;i++)
        cout<<a[i]<<endl;

}
