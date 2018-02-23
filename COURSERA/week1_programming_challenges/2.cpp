#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;


    int*a=new int [n];

    for(int i=0;i<n;i++)
        cin>>a[i];
        int prod=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(prod<a[i]*a[j])
                prod=a[i]*a[j];
        }
    }
    cout<<prod<<endl;
}
