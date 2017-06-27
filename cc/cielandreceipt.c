#include<stdio.h>

int main()
{
	int i,j,t,c=0;
	scanf("%d",&t);
	unsigned long int q,n;
	
	for(i=0;i<t;i++)
	{
		scanf("%u",&n);
		
		for(q=n;q>0;)
		{
			if((q%2048)==0)
			{
				c++;
				q=q-2048;
			}
			else if((q%1024)==0)
			{
				c++;
				q=q-1024;
			}
			else if ((q%512)==0)
			{
				c++;
				q=q-512;
			}
			else if ((q%256)==0)
			{
				c++;
				q=q-256;
			}
			else if((q%128)==0)
			{
				c++;
				q=q-128;
			}
			else if((q%64)==0)
			{
				c++;
				q=q-64;
			}
			else if((q%32)==0)
			{
				c++;
				q=q-32;
			}
			else if((q%16)==0)
			{
				c++;
				q=q-16;
			}
			else if((q%8)==0)
			{
				c++;
				q=q-8;
			}
			else if((q%4)==0)
			{
				c++;
				q=q-4;
			}
			else if ((q%2)==0)
			{
				c++;
				q=q-2;
			}
			else if((q%1)==0)
			{
				c++;
				q=q-1;
			}
			else
			{
				break;
			}
		}
		
		printf("%d\n",c);
		c=0;
		
	 } 
	 
	 return 0;
}
