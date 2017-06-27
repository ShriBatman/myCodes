#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,n,t;
	long long int l;
	char s[1001];
	char c[1001];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		long long int w[n+1];
		
		scanf("%s",&s);
		scanf("%s",&c);
		k=0;
		l=0;
		
		for(j=0;j<n+1;j++)
		{
			scanf("%lld",&w[j]);	
		}
		
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]==c[j])
			{
				k++;
			}
		}
		
		if(k==n)
		printf("%lld\n",w[n]);
		else
		{
		for(j=0;j<=k;j++)
		{
			if(l<w[j])
			l=w[j];
		}
		
		printf("%lld\n",l);
		}
	}
	
	return 0;
}
