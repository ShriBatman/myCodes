#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		
		scanf("%d",&l);
		int b[l];
		for(j=0;j<l;j++)
		{
			scanf("%d",&b[j]);
		}
		
		for(j=0;j<l;j++)
		{
			r=0;
			for(k=0;k<n;k++)
			{
				if(a[k]==b[j])
				{
					r=1;
					break;
				}
			}
			
			if(r==0)
			{
				break;
			}
		}
		
		if(r==0)
		{
			printf("No\n");
		}
		else
		printf("Yes\n");
		
	}
	return 0;
}
