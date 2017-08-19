//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	long long int matrix[4][4];
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		cin>>matrix[i][j];
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(j!=i)
			{
				long long int temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		cout<<matrix[i][j]<<" ";
		
		cout<<"\n";
	}
	
    return 0;
}

