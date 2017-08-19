//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	long long int matrix[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		cin>>matrix[i][j];
	}
	
	long long int max = 0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(matrix[i][j]>max)
			max = matrix[i][j];
		}
	}
	
	cout<<max;
	
    return 0;
}

