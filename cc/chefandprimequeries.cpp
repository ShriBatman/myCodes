//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int i,j,k,l,m,n,r,t,p,q,x,y,z,e;
	
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector<int> prime(1000001,1);

	prime[0]=prime[1]=0;
	
	for(int i=2;i*i<=1000001;i++)
	{
		if(prime[i]==1)
		{
			for(int j=i*2;j<=1000001;j+=i)
			prime[j]=0;
		}
	}
	
	cin>>n;
	
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>p>>q>>x>>y;
		e=0;
		int u=*max_element(a.begin()+(p-1),a.begin()+q);
		for(j=x;j<=y;j++)
		{
			if(j<=u)
			{
			if(prime[j]==1)
			{
				for(m=p-1;m<q;m++)
				{
					r=a[m];
					z=0;
					while(r%j==0)
					{
						r=r/j;
						z++;
					}
					e=e+z;
				}
			}
			}
			else
			break;
		}
		
		cout<<e<<"\n";
	}
	
	
	
    return 0;
}

