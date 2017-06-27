#include<stdio.h>
#include<math.h>

int main()
{
	long long int j,k,m,n,r;
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		
		if(n==1)
		printf("INFINITY\n");
		else
		{
		k=n-n/2;		
		for(j=2;j<=sqrt(n);j++)
		{
			m=n;
			while(m!=0)
			{
				r=m%j;
				//printf("%lld%lld%lld\n",r,m,j);
				m=m/j;
			}
			if(r==1)
			{
				k++;
			}
		}
		
		printf("%lld\n",k);
		}
		
		
	}

	return 0;
}
