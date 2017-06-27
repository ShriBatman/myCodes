#include<stdio.h>
#include<string.h>

int main()
{
	int j,k,l;
	char s[100001];
	scanf("%s",&s);
	l=strlen(s);
	
	k=0;
	if(s[l-1]=='E')
	printf("%d\n",l-1);
	else if(s[0]=='E')
	printf("%d\n",0);
	else
	{
	for(j=1;j<l-1;j++)
	{
		if(s[j]=='E' && s[j+1]=='E' && s[j-1]=='E')
		{
		printf("%d\n",j);
		k=1;
		break;
		}
	}
	if(k==0)
	{
		for(j=1;j<l-1;j++)
		{
		if(s[j]=='E' && (s[j+1]=='E'))
		{
			printf("%d\n",j+1);
			k=2;
			break;
		}
		}
	}
	if(k==0)
	{
		for(j=1;j<l-1;j++)
		{
			if(s[j]=='E')
			{
				printf("%d\n",j);
				break;
			}
		}
	}
	}
	
	return 0;
}
