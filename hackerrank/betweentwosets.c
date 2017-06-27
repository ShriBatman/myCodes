#include<stdio.h>

int gcd(int a,int b)
{
	int x,y,z;
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	
	z=x%y;
	
	while(z!=0)
	{
		x=y;
		y=z;
		z=x%y;
	}
	
	return y;
	
}

int main()
{
	int i,j,k,l,t,n,m,x,w,v;
	
	scanf("%d%d",&n,&m);
	
	int a[n];
	int b[m];
	
	t=0;
	l=1000;
	x=0;
	w=1;
	v=1;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]>t)
		{
			t=a[i];
		}
		
		if(i>0)
		w=(w*a[i])/gcd(w,a[i]);
		else
		w=a[0];
	}
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		if(l>b[i])
		{
			l=b[i];
		}
		if(i>0)
		v=gcd(v,b[i]);
		else
		v=b[0];
	}
	
	for(j=t;j<=l;j++)
	{
		if(j%w==0 && v%j==0)
		x++;
	}
	
	printf("%d\n",x);
	
}
