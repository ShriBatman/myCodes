#include<bits/stdc++.h>

using namespace std;
bool prime[100000+7];


void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
    
    prime[0]=prime[1]=false;
    
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
	int i,j,l,m,n,r,t,x,y,k,z;
	
	cin>>t;
	Sieve(100000+7);
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		
		vector<int> a;
		
		z=0;
		for(j=0;j<n;j++)
		{
			cin>>l;
			
			if(prime[l])
			{
				z++;
				a.push_back(z);
			}
			else
			{
				z=0;
				a.push_back(z);
			}
		}
		
		l=*max_element(a.begin(),a.end());
		
		
		r=0;
		k=0;
		y=0;
		
		for(j=0;j<m;j++)
		{
			if(a[j]==0)
			k++;
			else
			r++;
			
			//if(k-r>y)
			//y=k-r;
		}
		
		y=k-r;
		x=0;
		if(l==0)
		{
			cout<<"-1"<<endl;
		}
		else if(y<m && l<m)
		{
		for(j=m;j<n;j++)
		{
			if(a[j]>0)
			{
				if(a[j-m]==0)
				{
					y=y+2;
				}
			}
			else
			{
				if(a[j-m]>0)
				{
					y=y-2;
				}
			}
			
			if(y>=m)
			{
				x=m;
				break;
			}
			else
			{
				if(y>x)
				x=y;
			}
			
		}
		
		if(y>x && y<m)
		x=y;
		
		if(x>l)	
		cout<<x<<endl;
		else
		cout<<l<<endl;
		}
		else
		cout<<m<<endl;
		
	}
	return 0;
}
