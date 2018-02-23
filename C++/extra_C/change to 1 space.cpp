
#include <iostream>
#include<sstream>
using namespace std;
void substring()
{
   string str1;
   string str2;
   getline(cin,str1);
   stringstream g(str1);
   while(!g.eof())
    {
        g>>str2;
        cout<<str2<<" ";

    }


}

int main()
{

    substring();
}

