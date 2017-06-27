#include<bits/stdc++.h>

using namespace std;

long long int ipow(long long int base,long long int exp)
{
    long long int result = 1;
    while(exp)
    {
        if(exp & 1)
            result = ((result%1000000007) *(base%1000000007))%1000000007;
        exp=exp/2;
        base = ((base%1000000007) *(base%1000000007))%1000000007;
    }

    return result;
}

int main()
{
	int i,j,k,l,m,n,t,x;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		vector<int> a;
		
		for(j=0;j<n;j++)
		{
				cin>>l;
				if(j==0 && l==-1)
				l=1;
				
				a.push_back(l);
		}
		
		if(a[0]>1)
		cout<<"0"<<endl;
		else
		{
		
		long long int r;
		if(a[n-1]==-1)
		r=1;
		else
		r=0;
		
		x=0;
		for(j=n-2;j>=0;j--)
		{
			if(a[j]==-1)
			{
				if(a[j+1]>1)
				a[j]=a[j+1]-1;
				else
				r++;
			}
			else if(a[j+1]!=-1 && (a[j+1]!=1 || a[j]!=1))
			{
				if(a[j+1]==a[j] || (a[j+1]-a[j]!=1 && a[j+1]!=1))
				{
				cout<<"0"<<endl;
				x=1;
				break;
				}
			}
		}
		
		if(x==0)		
		cout<<ipow(2,r)<<endl;
		}
	}
	return 0;
}
