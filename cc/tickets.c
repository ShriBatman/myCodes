#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,t;
	scanf("%d",&t);
	char s[101];
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&s);
		l=0;
		
		if(strlen(s)==2)
		{
			if(s[0]==s[1])
			{
				l=1;
			}
		}
		
		for(j=2;j<strlen(s);j++)
		{
			if(s[j]!=s[j-2] || s[j-2]==s[j-1])
			{
				l=1;
				break;
			}
		}
		
		if(l==0)
		printf("YES\n");
		else if(l==1)
		printf("NO\n");
	}
	return 0;
}
