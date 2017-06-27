#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n,t,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		m=n;
		k=m%8;
		r=m/8;
		
		if(k>0 && k<=3)
		{
			l=k+3;
		}
		else if(k>3 && k<=6)
		{
			l=k-3;
		}
		else if(k==7)
		{
			l=k+1;
		}
		else if(k==0)
		{
			l=k-1;
		}
		
		if(l<0)
		{
			printf("%dSL\n",r*8+l);
		}
		else if(l==8)
		{
			printf("%dSU\n",r*8+l);
		}
		else if(l==1 || l==4)
		{
			printf("%dLB\n",r*8+l);
		}
		else if(l==2 || l==5)
		{
			printf("%dMB\n",r*8+l);
		}
		else if(l==3 || l==6)
		{
			printf("%dUB\n",r*8+l);
		}
	}
	return 0;
}

