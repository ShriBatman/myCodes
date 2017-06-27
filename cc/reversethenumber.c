#include<stdio.h>
#include<math.h>

int main()
{
	int t,i,count;
	unsigned long int a,r,q,n;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		count=0;
		a=0;
		scanf("%d",&n);
		q=n;
		while(q!=0)
		{
			q=q/10;
			count++;
		}
		q=n;
		while(count>0)
		{
			count--;
			r=q%10;
			q=q/10;
			a=a+(r*pow(10,count));
		}
		printf("%d\n",a);
	}
	
	return 0;
}
