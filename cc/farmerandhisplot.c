#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&l,&m);
		
		n=0;
		while(l!=m && l>0 && m>0)
		{
			n++;
			
			if(l>m)
			l=l-m;
			else
			m=m-l;
		}
		
		if(l==m && l>0 && m>0)
		{
			n++;
		}
		
		printf("%d\n",n);
	}
	
	return 0;
}
