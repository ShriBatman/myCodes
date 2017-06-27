#include<stdio.h>

int main()
{
	long long int i,j,n,d,r,x,a,t,k;
	
	scanf("%lld%lld",&i,&j);
	scanf("%lld",&k);
	
	x=0;
	for(t=i;t<=j;t++)
	{
		n=t;
		r=0;
		d=10;
		
		while(n!=0)
		{
			r=(r*d)+(n%10);
			n=n/10;
		}
		
		if(t>=r)
		a=t-r;
		else
		a=r-t;
		
		
		if(a%k==0)
		x++;
		
	 }
	 
	 printf("%lld\n",x);
	  
	 return 0;
}
