#include<stdio.h>

int main()
{
	int i,j,k,l,t,m,n,flag;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		int a[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(k=0;k<n;k++)
		{
			flag=0;
			
			if(a[k]!=-1)
			{
				
			for(m=k+1;m<n;m++)
			{
				if(a[k]==a[m] && a[m]!=-1)
				{
					flag=1;
					a[k]=a[m]=-1;
					break;
				}
			}
				if(flag==0)
				{
					printf("%d\n",a[k]);
				}
			
			}
		}
	}
	
	return 0;
}
