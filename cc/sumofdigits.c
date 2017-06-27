#include<stdio.h>

int main()
{
	int q,r,t,n,s,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		s=0;
		scanf("%d",&n);
		q=n;
		while(q!=0)
		{
			r=q%10;
			q=q/10;
			s=s+r;
		}
		printf("%d\n",s);
		
	}
	
	
	
	return 0;
}
