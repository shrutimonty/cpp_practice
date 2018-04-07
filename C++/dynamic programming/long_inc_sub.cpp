#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,lis=0;
		cin>>n;
		int* a=new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int* l=new int [n];
		for(int i=0;i<n;i++)
		{
			l[i]=1;
			int max=1;
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i] && max<=l[j])
				{
					l[i]=l[j]+1;
					max=l[j];
				}

			}
		}
		for(int i=0;i<n;i++)
		{
			if(l[i]>lis)
				lis=l[i];
		}
		cout<<lis<<endl;

	}
}