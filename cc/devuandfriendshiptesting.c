#include<stdio.h>

int main()
{
	int t,i,n,j,k;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		int a[n];
		int b[100]={0};
		k=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(b[a[j]-1]==0)
			{
				b[a[j]-1]++;
			}
		}
		
		for(j=0;j<100;j++)
		{
			if(b[j]==1)
			k++;
		}
		
		printf("%d\n",k);
	}
	
	return 0;
}
