#include<stdio.h>
 
int main()
{
	int i,j,k,r,s,n,m,t;	
	scanf("%d",&t);
	int a[10][10];
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				scanf("%1d",&a[j][k]);
			}
		}
		s=0;
		
		for(j=0;j<m;j++)
		{
			r=0;
			for(k=0;k<n;k++)
			{
				if(a[k][j]==1)
				r++;
			}
			
			s=s+(r*(r-1))/2;
		}
		
		printf("%d\n",s);
	}
	
	return 0;
} 
