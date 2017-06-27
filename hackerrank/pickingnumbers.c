#include<stdio.h>

int main()
{
	int i,j,k,l,m,n;
	
	scanf("%d",&n);
	int a[n];
	m=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==a[i] || a[j]==a[i]+1)
			k++;
		}
		if(m<k)
		m=k;
	}
	
	printf("%d\n",m);
	
	return 0;
}
