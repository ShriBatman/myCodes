#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t,r;
	
	scanf("%d",&n);
	
	int a[n];
	m=1000000;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<m)
		{
			m=a[i];
			l=0;
		}
		else if(m==a[i])
		{
			l=1;
		}
	}
	
	if(l==0)
	{
	k=2*m;
	}
	else if(l==1)
	{
	k=m;
}
	t=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		t++;
	}
	printf("%d\t%d",k,t);
	
	return 0;
}
