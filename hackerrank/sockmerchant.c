#include<stdio.h>

int main()
{
	int i,j,n,k,t;
	scanf("%d",&n);
	
	int c[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	
	t=0;
	for(k=0;k<n;k++)
	{
	for(j=k+1;j<n;j++)
	{
		if(c[k]==c[j] && c[k]!=-1 && c[j]!=-1)
		{
			t++;
			c[k]=-1;
			c[j]=-1;
			break;
		}
	}
	}
	
	printf("%d",t);
	
	return 0;
}
