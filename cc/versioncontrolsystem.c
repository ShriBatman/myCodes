#include<stdio.h>

int main()
{
	int i,j,k,n,m,t,r,q,l,x,y;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&n,&m,&k);
		int a[m];
		int b[k];
		
		x=0;
		y=0;
		
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(j=0;j<k;j++)
		{
			scanf("%d",&b[j]);
		}
		
		for(j=1;j<=n;j++)
		{
			l=0;
			q=0;
			for(r=0;r<m;r++)
			{
				if(j==a[r])
				{
					l=1;
					break;
				}
			}
			
			for(r=0;r<k;r++)
			{
				if(j==b[r])
				{
					q=1;
					break;
				}
			}
			
			if(q==1 && l==1)
			{
				x++;
			}
			else if(q==0 && l==0)
			{
				y++;
			}
			
		}
		
		printf("%d %d\n",x,y);
		
	}
	
	return 0;
}
