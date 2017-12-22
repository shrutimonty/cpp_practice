#include<iostream>
#include<sstream>
using namespace std;
void deno(int*a,int n,int pos,int maxno,int sum,string str)
{
  if(sum>maxno)
    return;
  if(sum<maxno & pos==n)
    return;
  if(sum==maxno)
  {
      cout<<str<<endl;
      return;
  }

  stringstream g;
  string newi;
  g<<a[pos];
  g>>newi;
  deno(a,n,pos,maxno,sum+a[pos],str+newi);
  deno(a,n,pos+1,maxno,sum,str);
}
int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxno;
    cin>>maxno;
    //for(int i=0;i<n;i++)
        deno(a,n,0,maxno,0,"");


}
