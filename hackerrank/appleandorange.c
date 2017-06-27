#include<stdio.h>

int main()
{
	int s,t,a,b,m,n,i,j,k,l;
	scanf("%d%d%d%d",&s,&t,&a,&b);
	
	scanf("%d%d",&m,&n);
	
	int d;
	k=0;
	l=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&d);
		if(d>=0 && d>=s-a && d<=t-a)
		{
			k++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&d);
		if(d<=0 && d<=t-b && d>=s-b)
		{
			l++;
		}
	}
	printf("%d\n%d\n",k,l);
	
	
	return 0;
}
