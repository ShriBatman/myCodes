#include<stdio.h>

int main()
{
	int i,j,k,n,t;
	long long int m,p,l; 
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		long long a[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		
		l=0;
		for(j=0;j<n;j++)
		{
			m=0;
			p=1;
			for(k=j;k>=0;k--)
			{
				m=m+a[k];
				p=p*a[k];
				
				if(m==p)
				l++;
			}
		}
		
		printf("%lld\n",l);
		
	}
}
