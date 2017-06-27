#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t;
	
	scanf("%d%d",&n,&m);
	
	if(m%2==0 && n%2==0)
	{
		k=(m*n)/4;
		printf("%d\n",k);
		return 0;
	}
	else if(n%2!=0 && m%2!=0)
	{
		k=((m-1)*(n-1))/4 + (n-1)/2 + (m+1)/2;
		printf("%d\n",k);
		return 0;
	}
	else if(m%2==0 && n%2!=0)
	{
		k=((m)*(n-1))/4 + m/2;
		printf("%d\n",k);
		return 0;
	}
	else if(m%2!=0 &&n%2==0)
	{
		k=((n)*(m-1))/4 + n/2;
		printf("%d\n",k);
		return 0;
	}
	
	return 0;
}
