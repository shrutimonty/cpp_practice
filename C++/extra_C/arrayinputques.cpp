//take the input as an array and display its sum but user wont input the size
//user input: 1 2 3 4 5 display sum of these
#include<iostream>
#include<sstream>
using namespace std;
//take input as a string and add numbers when you detect a space also convert string to int
int way1(string num)
{
    int m,n=0,sum=0;
    m=num.length();
    for(int i=0;i<m;i++)
    {
        if(num[i]==' ')
        {
            sum=sum+n;
            n=0;
        }
        else
        {
            n=n*10+(num[i]-'0');//subtract 0 character (48)
        }

    }
    sum=sum+n;
    return sum;
}

//create a stringstream
void way2()
{
    string s;
    getline(cin,s);
    stringstream g(s);
    int n,sum=0;
    while(!g.eof())
    {
        g>>n;
        sum=sum+n;
    }
    cout<<sum;

}

void way3()
{
    string s;
    getline(cin,s);
    stringstream g(s);
    string num;
    int n;
    int sum=0;
    while(getline(g,num,' '))
    {
        stringstream j(num);
        j>>n;
        sum=sum+n;
    }

}

void way4()
{

}
int main()
{
    string str;
    getline(ci
            n,str);
    cout<<way1(str);
}
