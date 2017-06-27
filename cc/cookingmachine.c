#include<stdio.h>

int main()
{
	long long int i,j,t,a,b;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&a,&b);
		
		printf("%d\n",fun(a,b,0));
		
	}
	
	return 0;
}

int fun(long long int n,long long int m,long long int r)
{
	int x=0;
	int y=0;
	long long int a,b;
	a=n;
	b=m;
	
		while(a%2==0)
		{
			a=a/2;
			x++;
		}
		
		while(b%2==0)
		{
			b=b/2;
			y++;
		}
		
		if(a==1)
		{
			if(n==m)
			{
				return 0+r;
			}
			else if(n>m)
			{
				return x-y+r;
			}
			else if(n<m)
			{
				return y-x+r;
			}
			
		}
		else
		{
			r++;
			fun(n/2,m,r);
		}
	
}
