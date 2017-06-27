#include<stdio.h>

long long int gcd(long long int a,long long int b)
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
	{
		return x;
	}
	else
	{
	    gcd(y,x%y);		
	}
}

int main()
{
	int i,j,k,l,n,t,r;
	long long int m;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		long long int a[n];
		
		r=0;
		k=0;
		l=0;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		if(j>0)
		{
			m=gcd(a[k],a[l+1]);
			if(m>1)
			{
				r++;
				k=l+1;
		
			}
			else if(m==1 && r==0)
			{
				k=l+1;
			}
			l++;

		}
		}
		printf("%d\n",r+1);
	}
	return 0;
}
