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
		vector<int> a(n+1);
		for(int i=1;i<n+1;i++)
			cin>>a[i];
		int cent;
		cin>>cent;
		vector<vector<int> >dp(n+1,vector<int>(cent+1));
		for(int i=0;i<n+1;i++)
			dp[i][0]=1;
		for(int j=1;j<cent+1;j++)
			dp[0][j]=0;
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<cent+1;j++)
			{
				if(j-a[i]<0)
					dp[i][j]=dp[i-1][j];
				else
				dp[i][j]=dp[i][j-a[i]]+dp[i-1][j];
				
				//cout<<dp[i][j]<<" ";
			}
			//cout<<endl;
		}
		cout<<dp[n][cent]<<endl;

	}
}