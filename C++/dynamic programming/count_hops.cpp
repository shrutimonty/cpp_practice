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
		vector<int>dp(n+1);
		dp[0]=0;
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		for(int i=4;i<=n;i++)
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		cout<<dp[n]<<endl;

	}
}