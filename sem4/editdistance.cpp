//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int mini(int x,int y)
{
	if(x<=y)
	return x;
	else
	return y; 
}

int edit(string p,string q)
{
	int i,j;
	int x=p.length();
	int y=q.length();
	
	int dp[x+1][y+1];
	
	for(i=0;i<y+1;i++)
	{
		dp[0][i]=i;
	}
	for(i=1;i<x+1;i++)
	{
		dp[i][0]=i;
	}
	
	for(i=1;i<x+1;i++)
	{
		for(j=1;j<y+1;j++)
		{
			if(p[i-1] == q[j-1])
			dp[i][j] = dp[i-1][j-1];
			else
			{
				dp[i][j] = 1 + mini(dp[i-1][j-1],mini(dp[i-1][j],dp[i][j-1]));
			}
		}
	}
	
	return dp[x][y];
}

int main()
{
	int i,j,k,l,m,n,r,t;
	string a,b;
	cin>>t;
	
	for(i=0;i<t;i++){
	cin>>a>>b;
	
	k=edit(a,b);
	cout<<k<<"\n";
	}
	
    return 0;
}

