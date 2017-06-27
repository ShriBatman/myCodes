#include<stdio.h>

int main()
{
	unsigned long int t,count,n,i,r,q;
	scanf("%u",&t);
	for(i=0;i<t;i++)
	{
		count=0;
		scanf("%u",&n);
		q=n;
		while(q!=0)
		{
			r=q%10;
			q=q/10;
			if(r==4)
			{
				count++;
			}
		}
		printf("\n%u\n",count);
	}
	
	return 0;
}
