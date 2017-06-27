#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,t;
	scanf("%d",&t);
	
	char x[11];
	char y[11];
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&x);
		scanf("%s",&y);
		k=0;
		
		for(j=0;j<strlen(x);j++)
		{
			if((x[j]==y[j]) || (x[j]=='?') || (y[j]=='?'))
			k=0;
			else
			{
				k=1;
			printf("No\n");
			break;
			}
		}
		if(k==0)
		{
			printf("Yes\n");
		}
	}
	
	
	return 0;
}
