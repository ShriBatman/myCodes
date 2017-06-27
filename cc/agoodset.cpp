//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		if(n==1)
		cout<<"1\n";
		else
		{
			cout<<"1 2 ";
			k=4;
			for(j=0;j<n-2;j++)
			{
				cout<<k<<" ";
				k+=3;
			}
			cout<<"\n";
		}
	}
	
    return 0;
}

