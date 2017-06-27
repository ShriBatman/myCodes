#include<stdio.h>
#include<string.h>

int main()
{
	int t,i,j,k,l,m,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		char s[12345];
		
		scanf("%s",&s);
		int flag=-1;
		l=strlen(s);
		
		for(j=0,k=l-1;j<l/2,k>=l/2;j++,k--)
		{
		    
			if(s[j]=='.' && s[k]=='.')
			{
				s[j]='a';
				s[k]='a';
			}
			else if(s[j]=='.')
			{
				s[j]=s[k];
			}
			else if(s[k]=='.')
			{
				s[k]=s[j];
			}
			else if(s[j]!=s[k])
			{
				flag=0;
				break;
			}
		
		}
		
		if(flag==0)
		{
			printf("-1\n");
		}
		else
		{
			if(s[n]=='.')
			{
				s[l/2]='a';
				printf("%s\n",s);
			}
			else
			{
			printf("%s\n",s);
			}
		}
		
	}
	
	return 0;
}
