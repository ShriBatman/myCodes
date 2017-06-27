#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,m,t;
	char a[1001];
	char b[1001];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&a);
		scanf("%s",&b);
		m=0;
		
		for(j=0;j<strlen(a);j++)
		{
			for(k=0;k<strlen(b);k++)
			{
				if(a[j]==b[k])
				{
					m=1;
					break;
				}	
			}
			if(m==1)
			{
				printf("Yes\n");
				break;
			}
		}
		
		if(m!=1)
		{
			printf("No\n");
		}
		
	}
	return 0;
}
