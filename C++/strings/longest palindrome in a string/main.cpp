#include <iostream>

using namespace std;

bool ispalindrome(string str)
{
  int i=0;
  int j=str.length()-1;
  while(i<j)
  {
      if(str[i]!=str[j])
        return false;
      i=i+1;
      j=j-1;
  }
  return true;
}

int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      string str;
      cin>>str;
      int n=str.length();
      string coca="",ans;
      int maxs=0;
      //bool check=ispalindrome(str);
      //cout<<check;
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              for(int z=i;z<=j;z++)
              {
                  coca+=str[z];
              }
              if((ispalindrome(coca))& (maxs<coca.length())&(coca.length()!=str.length()))
              {
                  maxs=coca.length();
                  ans=coca;
              }
              coca="";

           }
      }
     if(ans=="")
      {
          if(ispalindrome(str))
          cout<<str<<endl;
          else
          cout<<str[0]<<endl;

      }

      else
      cout<<ans<<endl;

  }
}
