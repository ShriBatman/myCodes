#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,r,t,x,y,z;
	scanf("%d",&n);
	
	int a[n];
	
	x=0;
	t=1000000;

	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	r=0;
	m=0;
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=i;j<n;j++)
		{
			if(a[j]-k<=0 || a[j]==0)
			r++;
			
			k++;
		}
		
		for(j=0;j<i;j++)
		{
			if(a[j]-k<=0 || a[j]==0)
			r++;
			
		k++;
		}
		
		if(r>m)
		{
			m=r;
			t=i;
		}
		else if(r==m)
		{
			if(i<t)
			t=i;
		}
		
		r=0;
	}
	t++;
	printf("%d\n",t);
	return 0;
}
