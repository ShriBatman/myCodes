#include<stdio.h>

int main()
{
	int i,j,k,l,t,n;
	float avg;
	int a[100000];
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		avg=0;
		k=0;
		l=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			avg=avg+a[j];
			if(a[j]==2)
			{
				k++;
			}
			if(a[j]==5)
			{
				l++;
			}
		}
		
		if((avg/n)<4 || l==0 || k>0)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
	}
	
	
	return 0;
}
