#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
		
		int a[n];
		int count[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			
			count[j]=0;
		}
		
		for(j=0;j<n;j++)
		{
			  count[a[j]-1]++;
		}
		
		m=0;
		for(j=0;j<n;j++)
		{
			if(count[j]>=k && a[j]!=j+1)
			m++;
		}
		
		printf("%d\n",m);
		
	}
	
	
	return 0;
}
