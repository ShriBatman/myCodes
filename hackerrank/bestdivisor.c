#include<stdio.h>
#include<math.h>

int main()
{
	int i,k,s,n,r,t,x;
	scanf("%d",&n);
	
	k=0;
	for(i=1;i<=sqrt(n)+1;i++)
	{
		s=0;
		if(n%i==0)
		{
			t=i;
			while(t>0)
			{
				r=t%10;
				s=s+r;
				t=t/10;
			}
			if(s>k)
			{
				k=s;
				x=i;
			}
			else if(s==k)
			{
				if(x>i)
				x=i;
			}
			
			s=0;
			if(i!=sqrt(n))
			{
			t=n/i;
			while(t>0)
			{
				r=t%10;
				s=s+r;
				t=t/10;
			}
			if(s>k)
			{
				k=s;
				x=n/i;
			}
			else if(s==k)
			{
				if(x>n/i)
				x=n/i;
			}
			}
		}
	}
	
	printf("%d\n",x);
	
	return 0;
}
