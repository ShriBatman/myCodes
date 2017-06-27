#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		long long int a[n];
		long long int b[n];
		k=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%lld",&b[j]);
			if(j==0 && b[j]<=a[j]-0)
			{
				k++;
			}
			else if(j>0 && b[j]<=a[j]-a[j-1])
			{
				k++;
			}
		}
		
		printf("%d\n",k);
		
		
	}
	return 0;
}
