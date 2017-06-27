#include<stdio.h>

int main()
{
	int i,t,s,r;
	unsigned long int n,q;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		q=n;
		r=q%10;
		s=r;
		while(q!=0)
		{
			r=q%10;
			q=q/10;
		}
		s=s+r;
		printf("%d\n",s);
	}
	
	return 0;
}
