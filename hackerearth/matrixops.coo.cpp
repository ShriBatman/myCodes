#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,n,r,t,x,z,q,w,u,v;
    
    cin>>n>>m;
    
    vector<long long int> a;
    vector< vector<long long int> >b(n,(vector<long long int>(n,m)));
    
    t=0;
    for(i=0;i<n*n;i++)
    {
        cin>>l;
        t=t+l;
        a.push_back(l);
    }
    
    r=n*n*m;
    z=1;
    q=r;
    u=0;
	v=0;
    
    w=n;
    x=0;
    
    for(i=0;i<n;i++)
	{
		if(b[u][v]==m)
		{
    	if(q-t>=m)
		{
		  b[u][v]=1;
    	  q=q-m+1;
		}
		else
		{
			b[u][v]=b[u][v]-(q-t);
			q=q-(q-t);
		}}
		
		if(q==t)
		{
			break;
		}
		else if(n<=3)
		{
    	while(z<w)
    	{
    	if(q-t>=m)
    	{
    		b[u][v+z]=1;
    		q=q-m+1;
		}
		else
		{
			b[u][v+z]=b[u][v+z]-(q-t);
			q=q-(q-t);
		}
		
		if(q==t)
		{
			x=1;
			break;
		}
		
		if(q-t>=m)
    	{
    		b[u+z][v]=1;
    		q=q-m+1;
		}
		else
		{
			b[u+z][v]=b[u+z][v]-(q-t);
			q=q-(q-t);
		}
		
		if(q==t)
		{
			x=1;
			break;
		}
		z++;
		}
		
		if(x==1)
		{
			break;
		}
		u++;
		v++;
		z=1;
		w--;
		}
		else
		{
			if()
			
		}
	}
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
