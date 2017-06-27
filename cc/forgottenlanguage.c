#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	
	char x[100][6];
	char y[301];
	char z[4]="YES";
	char w[3]="NO";
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
		
		for(j=0;j<n;j++)
		{
			scanf("%s",&x[j]);
		}
		
		for(j=0;j<k;j++)
		{
			scanf("%d",&l);
			scanf("%s",&y);
			
			for(m=0;m<n;m++)
			{
				if(strstr(y,x[m])!=NULL)
				{
					strcpy(x[m],z);
				}
				else
				{
					strcpy(x[m],w);
				}
			}
		}
		
		for(j=0;j<n;j++)
		{
			printf("%s\n",z[j]);
		}
		
	}
	return 0;
}
