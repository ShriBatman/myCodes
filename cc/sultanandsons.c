#include<stdio.h>

int main()
{
	int t,i,j,a;
	float c,e,n,p,q;
	unsigned long int m,f,s;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%f",&n);
		scanf("%u",&m);
		scanf("%u",&f);
		
		c=0;
		e=0;
		a=n;
		
		while(a!=0)
		{
			scanf("%u",&s);
			if(s%m==0)
			{
				c++;
				a--;
			}
			else if(s%f==0)
			{
				e++;
				a--;
			}
			else
			{
				a--;
			}
		}
		
		
		p=(c*100)/n;
		q=(e*100)/n;
		
		if((p+q)>=70)
		{
			printf("Yes\n");
			if(p>q)
			{
				printf("Multan\n");
			}
			else if(q>p)
			{
				printf("Fultan\n");
			}
			else
			{
				printf("Both\n");
			}
		}
		else
		{
			printf("No\n");
		}
		
		
	}
	
	return 0;
}
