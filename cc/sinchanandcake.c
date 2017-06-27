#include<stdio.h>

int main()
{
	int i,t,j,n,l,r,b;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		scanf("%d",&l);
		scanf("%d",&b);
		
		while(n!=0)
		{
			if(l>0 && b>0)
			{
			
			if(l>=b)
			{
				l=l-b;
				n--;
			}
			else if(b>l)
			{
				b=b-l;
				n--;
			}
			
			}
			
			if(l==0 || b==0)
			{
				n=0;
			}
			
		}
		
		r=l*b;
		
		if(r!=0)
		{
			printf("Yes\t%d\n",r);
		}
		else
		{
			printf("No\n");
		}
	}
	
	return 0;
}
