//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

//long int dp[100001][200002];

long long int max(long long int a,long long int b)
{
	if(a<=b)
	return b;
	else
	return a;
}

void knapsack(long long int x,long int n,vector< vector<long long int> >w)
{
	//long int dp[n][x+1];
	
	for(int i=0;i<n;i++)
	{
		dp[i][0]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=x;j++)
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
	
	for(int i=1;i<x+1;i++)
	cout<<dp[n-1][i]<<" ";
	
	
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	//cin>>t;
	
	//for(i=0;i<t;i++)
	//{
		cin>>n;
		
		vector< vector<long long int> > a;
		m=0;
		for(j=0;j<n;j++)
		{
			vector<long long int>b;
			cin>>r>>l;
			m+=r;
			b.push_back(r);
			b.push_back(l);
			a.push_back(b);
		}
		
		knapsack(m,n,a);
		
	//}
	
    return 0;
}

