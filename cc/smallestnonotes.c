#include<stdio.h>


int main()
{
	int t,i,count=0;
	unsigned long int n,q;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		q=n;
		
		for(q=n;q>0;)
		{
			if(q>=100)
			{
				count++;
				q=q-100;
			}
			else if(q>=50)
			{
				count++;
				q=q-50;
			}
			else if(q>=10)
			{
				count++;
				q=q-10;
			}
			else if(q>=5)
			{
				count++;
				q=q-5;
			}
			else if(q>=2)
			{
				count++;
				q=q-2;
			}
			else if(q>=1)
			{
				count++;
				q=q-1;
			}
			else
			{
				break;
			}
			
		}
		printf("%d\n",count);
		count=0;	
	}
	return 0;
}
