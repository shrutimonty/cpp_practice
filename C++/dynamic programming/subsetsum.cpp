#include<iostream>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		int sum=0;
		cin>>n;
		int* a=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2!=0)
		{
			cout<<"NO"<<endl;
			continue;//to exit from that testcase;
		}
		sum=sum/2;

		bool **dp=new bool*[n+1];
		for(int i=0;i<n+1;i++)
			dp[i]=new bool[sum+1];
		for(int i=0;i<n+1;i++)
			dp[i][0]=true;
		for(int j=1;j<sum+1;j++)
			dp[0][j]=false;
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<sum+1;j++)
			{
				if(j-a[i-1]<0)
					dp[i][j]=dp[i-1][j];
				else
					dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
			
		}
		if(dp[n][sum]==true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

}