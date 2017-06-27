#include<stdio.h>


int main()
{
	int k,n,m,i,j,l,t,x,r;
	scanf("%d%d%d",&n,&m,&r);
	
	int a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	x=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			k=0;
			for(l=0;l<n;l++)
			{
				for(t=0;t<m;t++)
				{
					if((l-i)*(l-i)+(t-j)*(t-j)<=r*r)
					{
						k=k+a[l][t];
					}
				}
			}
			
			x=x^k;
		}
	}
	
	printf("%d",x);
	
	return 0;
}
