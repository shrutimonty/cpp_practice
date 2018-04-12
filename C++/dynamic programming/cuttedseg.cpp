#include<iostream>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int x,y,z,len;
		cin>>len;
		cin>>x>>y>>z;
		int* dp=new int[len+1];
		dp[0]=0;
		for(int i=1;i<=len;i++)
			dp[i]=-1;
		for(int i=1;i<=len;i++)
		{
			if(i>=x )
			{
				if(dp[i-x]!=-1)
				dp[i]=max(dp[i],1+dp[i-x]);
			}
			if(i>=y)
			{	
				if(dp[i-y]!=-1)
				dp[i]=max(dp[i],1+dp[i-y]);
			}
			if(i>=z)
			{	
				if(dp[i-z]!=-1)
				dp[i]=max(dp[i],1+dp[i-z]);
			}
			
		}
		for(int i=0;i<=len;i++)
			cout<<dp[i]<<" ";
		cout<<endl;
		cout<<dp[len]<<endl;
	}

}