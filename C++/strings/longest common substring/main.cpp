#include <iostream>

using namespace std;

int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      string stra;
      string strb;
      int max=0;
      int a,b;
      cin>>a>>b;
      cin>>stra;
      cin>>strb;
      for(int i=0;i<a;i++)
      {
          string test="";
          //test+=stra[i];
          for(int j=i;j<a;j++)
          {
              test+=stra[j];
              if(strb.find(test)!=-1)
              {
                  if(max<test.length())
                     max=test.length();
              }
          }
      }
      cout<<max<<endl;
  }
}
