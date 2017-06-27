#include<stdio.h>

int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=0;
	
	if(a[0]!=1)
	k++;
	
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i-1]+1)
		k++;
	}
	
	printf("%d\n",k);
	
	return 0;
}
