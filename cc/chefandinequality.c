#include<stdio.h>
 
int main()
{
	long long int t,a,b,c,d,i,j,k,r;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
	    r=0;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		
		for(j=a;j<=b;j++)
		{
			if(j>=c)
			{
				break;
			}
			else
			{
				r=r+(d-c+1);
			}
		}
		
		for(k=j;k<=b;k++)
		{
			if(d>k)
			{
				r=r+(d-k);
			}
			else
			{
				break;
			}
		}
		
		printf("%lld\n",r);
	}
	
	return 0;
} 
