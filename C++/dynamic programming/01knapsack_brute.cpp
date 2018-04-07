#include<iostream>
using namespace std;
void knap(int* w,int* v,int n,int pos,int &max,int wmax,int wcur,int valcur)
{
	if(pos==n+1)
		return;
	if(wcur>wmax)
		return;
	if(valcur>max)
		max=valcur;
	knap(w,v,n,pos+1,max,wmax,wcur+w[pos],valcur+v[pos]);
	knap(w,v,n,pos+1,max,wmax,wcur,valcur);
	return;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int wmax;
		cin>>wmax;
		int* w=new int[n];
		int* v=new int[n];
		for(int i=0;i<n;i++)
			cin>>v[i];
		for(int i=0;i<n;i++)
			cin>>w[i];
		int max=0;
		knap(w,v,n,0,max,wmax,0,0);
		cout<<max<<endl;

	}
}