#include<stdio.h>

int main()
{
	long long int m1,m2,m3,o1,o2,o3,p1,p2,p3,t,i,j,x;
	long long int a[6];
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&m1,&m2,&m3);
		scanf("%lld%lld%lld",&o1,&o2,&o3);
		scanf("%lld%lld%lld",&p1,&p2,&p3);
		
		a[0]=m1+o1+p1;
		a[1]=m2+o2+p2;
		a[2]=m3+o3+p3;
		a[3]=m1+m2+m3;
		a[4]=o1+o2+o3;
		a[5]=p1+p2+p3;
		
		x=0;
		
		for(j=0;j<6;j++)
		{		
		if(a[j]%2==0)
		{
			a[j]=a[j]-1;
		}
		}
		
		for(j=0;j<6;j++)
		{
			if(x<a[j])
			{
				x=a[j];
			}
		}
		
		printf("%lld\n",x);
	}
	return 0;
}
