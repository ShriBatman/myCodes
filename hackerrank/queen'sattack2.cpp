#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,k,m,n,t,r,x,y,a,b,c,d,e,f,g,h,u,v,w,z;
	
	cin>>n>>m;
	cin>>y>>x;
	
	k=0;
	a=1000000;
	b=0;
	c=1000000;
	d=0;
	
	e=0;
	f=0;
	g=1000000;
	h=1000000;
	u=0;
	v=1000000;
	w=1000000;
	z=0;
	
	for(i=0;i<m;i++)
	{
		cin>>t>>r;
		
	
		if(t==y && r>x)
		{
			if(a>r)
			{
				a=r;
				k=k+(r-x-1);
			}	
		}
		else if(t==y && r<x)
		{
			if(b<r)
			{
				b=r;
				k=k+(x-r-1);
			}
		}
		else if(t>y && r==x)
		{
			if(t<c)
			{
				c=t;
				k=k+(t-y-1);
			}
		}
		else if(t<y && r==x)
		{
			if(t>d)
			{
				d=t;
				k=k+(y-t-1);
			}
		}
		else if(abs(x-r)==abs(y-t))
		{
			if(r<x && t<y)
			{
				if(r>e && t>f)
				{
					e=r;
					f=t;
					if(y-t<=x-r)
					k=k+(y-t-1);
					else
					k=k+(x-r-1);
				}
			}
			else if(r>x && t>y)
			{
				if(r<g && t<h)
				{
					g=r;
					h=t;
					if(r-x<=t-y)
					k=k+(r-x-1);
					else
					k=k+(t-y-1);
				}
			}
			else if(r>x && t<y)
			{
				if(r<v && t>u)
				{
					v=r;
					u=t;
					if(r-x<=y-t)
					k=k+(r-x-1);
					else
					k=k+(y-t-1);
				}
			}
			else if(r<x && t>y)
			{
				if(r>z && t<w)
				{
					w=t;
					z=r;
					if(x-r<=t-y)
					k=k+(x-r-1);
					else
					k=k+(y-t-1);
				}
			} 
		}
		
		
	}
	
	if(a==1000000)
	{
		k=k+(n-x);
	}
	if(b==0)
	{
		k=k+(x-1);
	}
	if(c==1000000)
	{
		k=k+(n-y);
	}
	if(d==0)
	{
		k=k+(y-1);
	}
	if(e==0)
	{
		if(y-1<=x-1)
		k=k+(y-1);
		else
		k=k+(x-1);
	}
	if(g==1000000)
	{
		if(n-y<=n-x)
		k=k+(n-y);
		else
		k=k+(n-x);
	}
	if(u==0)
	{
		if(n-x<=y-1)
		k=k+(n-x);
		else
		k=k+(y-1);
	}
	if(z==0)
	{
		if(n-y<=x-1)
		k=k+(n-y);
		else
		k=k+(x-1);
	}
	
	cout<<k<<endl;
	
	
	return 0;
}
