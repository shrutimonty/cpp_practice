#include<iostream>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n1,n2;
		cin>>n1>>n2;
		string str1,str2;
		cin>>str1>>str2;

		//making a 2-d array
		int **dp=new int*[n1];
		for(int i=0;i<n1;i++)
			dp[i]=new int [n2];
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(str1[i]==str2[j])
				{
					if(i==0||j==0)
						dp[i][j]=1;
					else
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else
				{
					if(i==0 && j==0)
						dp[i][j]=0;
					else if(i==0)
						dp[i][j]=dp[i][j-1];
					else if(j==0)
						dp[i][j]=dp[i-1][j];
					else
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}

			}
		}
		cout<<dp[n1-1][n2-1]<<endl;
	}
}