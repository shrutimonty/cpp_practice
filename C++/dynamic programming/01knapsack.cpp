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
		int wmax;
		cin>>wmax;
		int* w=new int[n+1];
		int* v=new int[n+1];
		for(int i=1;i<n+1;i++)
			cin>>v[i];
		for(int i=1;i<n+1;i++)
			cin>>w[i];
		vector<vector<int> >dp(n+1,vector<int>(wmax+1,0));
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<wmax+1;j++)
			{
				if(j-w[i]<0)
					dp[i][j]=dp[i-1][j];
				else
				dp[i][j]=max(v[i]+dp[i-1][j-w[i]],dp[i-1][j]);
			}
		}
		cout<<dp[n][wmax];	
		

	}
}