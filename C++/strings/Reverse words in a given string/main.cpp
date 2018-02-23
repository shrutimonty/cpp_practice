#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        string strans="";
        bool first=false;
        int st=0,en=str.length();

        for(int i=str.length()-1;i>=0;i--)
        {
          if(str[i]=='.')
          {
              for(int j=i+1;j<en;j++)
                strans+=str[j];
              strans+=".";
              en=i;
          }
          //cout<<"hi";
        }
        //strans+=".";
        for(int j=0;j<en;j++)
            strans+=str[j];
        cout<<strans<<endl;
    }
}
