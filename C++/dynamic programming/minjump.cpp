#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		int cur=0;
		int jump=0;
		bool can_reach=true;
		while(cur!=n-1)
		{
			//cout<<a[cur]<<endl; 
		    if(a[cur]==0)
			{
				can_reach=false;
				break;
			}
			if(a[cur]+cur>=n-1)
			{
				cur=n-1;
				jump++;
				continue;
			}
			int maxjump=cur+1;
			for(int j=cur+2;j<=(a[cur]+cur);j++)
			{
				if(a[j]+j > a[maxjump]+maxjump)
					maxjump=j;
			}
			cur=maxjump;
			jump++;

		}
		if(can_reach)
		cout<<jump<<endl;
		else
			cout<<-1<<endl;

	}
}