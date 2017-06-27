#include<stdio.h>

int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	scanf("%d",&m);
	
	if(n%2!=0)
	{
		if(m%2!=0)
		{
			k=(m-1)/2;
			l=(n-m)/2;
		}
		else
		{
			k=m/2;
			l=(n-m-1)/2;
		}
	}
	else
	{
		if(m%2!=0)
		{
			k=(m-1)/2;
			l=(n-m+1)/2;			
		}
		else
		{
			k=m/2;
			l=(n-m)/2;
		}
	}
	
	if(l>k)
		printf("%d\n",k);
		else
		printf("%d\n",l);
	
	
	return 0;
}
