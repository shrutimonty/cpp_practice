#include<iostream>
using namespace std;
string substri(string strmain,int index)
{
    string store="";
    int j=0;


    for(int i=index;i<strmain.length();i++,j++)
    {
        store+=strmain[i];

    }

    return store;
}
int main()
{
    string strmain;
    cin>>strmain;
    int index,length;
    cin>>index;

    string substring;


        substring=substri(strmain,index);

           cout<<substring;


}
