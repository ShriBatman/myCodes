#include<stdio.h>
#include<string.h>

int main()
{
	int t,i,j,k,r,l,n,q;
	scanf("%d",&t);
	
	char s1[101],s2[101];
	
	for(i=0;i<t;i++)
	{
		scanf("%s",&s1);
		scanf("%s",&s2);
		
		n=0;
		l=0;
		
		k=strlen(s1);
		
		for(j=0;j<k;j++)
		{
			if(s1[j]=='?' && s2[j]=='?')
			{
				n++;
			}
			else if(s1[j]=='?' || s2[j]=='?')
			{
				n++;
			}
			else if(s1[j]!=s2[j])
			{
				n++;
				l++;
			}
		}
		
		printf("%d %d\n",l,n);
		
		
	}
	
	return 0;
}
