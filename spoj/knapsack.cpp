//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	if(a<=b)
	return b;
	else
	return a;
}

int knapsack(int x,int n,vector< vector<int> >w)
{
	int dp[n][x+1];
	
	for(int i=0;i<n;i++)
	{
		dp[i][0]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=x;j++)
		{
			if(w[i][0]<=j)
			{
				if(i!=0)
				{
					dp[i][j]=max(w[i][1]+dp[i-1][j-w[i][0]],dp[i-1][j]);
				}
				else
				{
					dp[i][j]=w[i][1];
				}
			}
			else
			{
				if(i!=0)
				dp[i][j]=dp[i-1][j];
				else
				dp[i][j]=0;
			}
		}
	}
	
	return dp[n-1][x];	
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	//cin>>t;
	
	//for(i=0;i<t;i++)
	//{
		cin>>m>>n;
		
		vector< vector<int> > a;
		
		for(j=0;j<n;j++)
		{
			vector<int>b;
			cin>>r>>l;
			b.push_back(r);
			b.push_back(l);
			a.push_back(b);
		}
		
		cout<<knapsack(m,n,a);
		
	//}
	
    return 0;
}

