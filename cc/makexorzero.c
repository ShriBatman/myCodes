#include<stdio.h>

int main()
{
	int i,j,k,l,n,m,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		k=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]==1)
			{
				k++;
			}
		}
		
		if(k%2==0)
		{
			printf("%d\n",n-k);
		}
		else
		{
			printf("%d\n",k);
		}
		
	}
	
	return 0;
}
