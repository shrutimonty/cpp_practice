#include<iostream>
#include<vector>
using namespace std;
int minimum(int a,int b,int c)
{
	int smallest;
	if(a<=b && a<=c)
	{
    	smallest = a;
	}
	else if(b<=c && b<=a)
	{
    	smallest = b;
	}
	else
	{
    	smallest = c;
	}
	return smallest;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n1 ,n2;
		cin>>n1>>n2;
		string str1;
		string str2;
		cin>>str1>>str2;
		vector<vector<int> >dp(n1+1,vector<int>(n2+1));
		for(int i=0;i<n1+1;i++)
			dp[i][0]=i;
		for (int j = 0; j<n2+1;j++)
		{
			dp[0][j]=j;
		}
		for(int i=1;i<n1+1;i++)
		{
			for(int j=1;j<n2+1;j++)
			{
				
				if(str1[i-1]==str2[j-1])
					dp[i][j]=dp[i-1][j-1];
				else
				{
					
					dp[i][j]=1+minimum(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]);

				}
				
				
			}

		}
		for(int i=0;i<=n1;i++)
		{
			for(int j=0;j<=n2;j++)
				cout<<dp[i][j]<<" ";
			cout<<endl;
		}
		cout<<dp[n1][n2]<<endl;

	}
}