#include<iostream>
#include<sstream>
#include<string>
#include <cstdio>
using namespace std;
void string_int1()
{
    string str;
    int n;
    cin>>str;
    stringstream g(str);
    g>>n;
    cout<<n+1;
}
void string_int2()
{
    int n=0;
    string str;
    getline(cin,str);
    int m = str.length();
    for(int i=0;i<m;i++)
    {
        n=n*10+(str[i]-48);
    }
    cout<<n+1;
}
void int_string()
{
    int n=10;
    char c[100];
    sprintf(c,"%d",n);
    printf("%s",c);

}
void int_string2()
{
    int n=10;
    string s;
    s=to_string(n);
    cout<<s;
//   string str1 = to_string(12.10);
}

int main()
{
int_string2();
}
