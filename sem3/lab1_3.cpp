//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	long long int matrix[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>matrix[i][j];
	}
	
	long long int sum = 0;
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		sum = sum + matrix[i][j];
	}
	
	cout<<sum;
	
    return 0;
}

