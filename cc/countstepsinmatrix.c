#include<stdio.h>

int main()
{
	int i,j,k,l,n,t,x,y;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		int a[n][n];
		int m[n*n][2];
		l=0;
		
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[j][k]);
				
				m[a[j][k]-1][0]=j;
				m[a[j][k]-1][1]=k;
			}
		}
		
		for(j=0;j<n*n-1;j++)
		{
			l=l+abs(m[j][0]-m[j+1][0])+abs(m[j][1]-m[j+1][1]);
		}
		
		printf("%d\n",l);
		
	}
	return 0;
}
