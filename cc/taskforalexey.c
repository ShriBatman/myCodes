#include<stdio.h>

long long int lcm(long long int a,long long int b)
{
	long long int x,y;
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	
	if(y==0)
	return x;
	else
	lcm(y,x%y);	
}

int main()
{
	int i,j,k,l,n,t;
	long long int m;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		long long int a[n];
		m=1000000000000000000;
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(m>(a[j]*a[k])/lcm(a[j],a[k]))
				m=(a[j]*a[k])/lcm(a[j],a[k]);
			}
		}
		
		printf("%lld\n",m);
	}
	
	return 0;
}
