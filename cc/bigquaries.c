#include<stdio.h>

int main()
{
	long long int n,m,x,c,d;
	int t,e,l,r,i,j,b,k;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&n,&m);
		long long int a[n];
		d=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		
		for(j=0;j<m;j++)
		{
			scanf("%d%d%d",&e,&l,&r);
			k=1;
			c=1;
			if(e==1 || e==2)
			{
				scanf("%lld",&x);
			}
				for(b=l-1;b<r;b++)
				{
					if(e==1)
					a[b]=a[b]*x;
					
					else if(e==2)
					{
						a[b]=k*x;
						k++;
					}
					else 
					{
						c=c*a[b];
					}
				}
				
				while(c%10==0)
				{
					c=c/10;
					d++;
				}
		}
		printf("%lld\n",d);
		
	}
	
	return 0;
}
