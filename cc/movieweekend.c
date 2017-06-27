#include<stdio.h>

int main()
{
	int i,j,k,l,t,m,n,r,x;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[2][n];
		
		for(j=0;j<2;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[j][k]);
			}
		}
		
		m=0;
		r=0;
		x=-1;
		for(j=0;j<n;j++)
		{
			if(m<a[0][j]*a[1][j])
			{
				m=a[0][j]*a[1][j];
				r=a[1][j];
				x=j;
			}
			else if(m==a[0][j]*a[1][j])
			{
				if(r<a[1][j])
				{
					r=a[1][j];
					x=j;
				}
				else if(r==a[1][j])
				{
					if(x>j)
					x=j;
				}
				
			}
		}
		
		printf("%d\n",x+1);
	}
	
	return 0;
}
