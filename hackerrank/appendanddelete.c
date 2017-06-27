#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,r;
	char s[101];
	char t[101];
	scanf("%s",&s);
	scanf("%s",&t);
	
	scanf("%d",&k);
	
	if(strcmp(s,t)==0)
	{
		if(k==0 || k>=2*strlen(s) || (k<2*strlen(s) && k%2==0))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else if(strcmp(s,t)!=0)
	{
		for(i=0,j=0;i<strlen(s),j<strlen(t);i++,j++)
		{
			if(s[i]!=t[j])
			break;
		}
		
		r=(strlen(s)-i)+(strlen(t)-j);
		
		if(k==r || (i==0 && k>=r) || (k>=r && ((k%2==0 && r%2==0) || (k%2!=0 && r%2!=0) )))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else
	{
		printf("No\n");
	}

	
	return 0;
}

