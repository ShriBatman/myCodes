#include<stdio.h>

int main()
{
	int i,t,n,r,k,j,m,l;
	
	scanf("%d",&n);
	long long int a[n];
	r=n;
	j=0;
	while(j<r)
	{
		scanf("%lld",&a[j]);

		if(a[j]==a[j-1] && j>0)
		{
			r--;
			j--;
		}
		j++;
	}
	
	scanf("%d",&m);
	long long int b[m];
		
	for(j=0;j<m;j++)
	{
		scanf("%lld",&b[j]);
	}
	l=r/2;
	
	for(i=0;i<m;i++)
	{
		if(b[i]<a[l])
		{
		j=r-1;
		k=0;
		while(b[i]>=a[j] && j>=0)
		{
			k++;	
			j--;
		}
		
		if(k==0)
		printf("%d\n",r+1);
		else
		printf("%d\n",r-k+1);
		}
		else
		{
		j=0;
		k=0;
		while(b[i]<=a[j] && j<r)
		{
			k++;	
			j++;
		}
		
		if(a[j-1]==b[i])
		printf("%d\n",k);
		else
		printf("%d\n",k+1);
		}
		
	}
	
	return 0;
}
