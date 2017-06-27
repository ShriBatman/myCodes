#include<stdio.h>

int main()
{
	int i,t,n;
	long long int m,j,k,sum;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%lld",&n,&k);
		long long int a[n+k];
		sum=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			sum=sum+a[j];
		}
		
		for(j=n;j<n+k;j++)
		{
			a[j]=sum+1;
			sum=sum+sum+1;
		}
		
		if(a[n+k-1]%2==0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
		
	}
	
	return 0;
}
