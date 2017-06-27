#include<stdio.h>
#include<math.h>

int main()
{
	int sum,i,j,k,l,n,a,b;
	long long int x;
	float m;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%lld",&x);
		
		m=x;
		
		for(j=0;j<2;j++)
		{
			m=sqrt(m);
		}
		
		sum=0;
		
		if(m>=a)
		{
			if(m<=b)
			{
			l=m;
			sum=(l*(l+1)/2)-((a-1)*a/2);
			}
			else
			{
				l=b;
				sum=(b*(b+1)/2)-((a-1)*a/2);
				
			}
		}
		
		if(sum==0)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",sum);
		}
		
	}
	
	
	return 0;
}
