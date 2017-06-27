#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,t,r,q,flag;
	scanf("%d",&t);
	
	char ch[100000];
	
	int count[7];
	
	for(r=0;r<t;r++)
	{
		fflush(stdin);
		scanf("%s",&ch);
		
		for(q=0;q<7;q++)
		{
			count[q]=0;
		}
		
		flag=-1;
		
		for(j=0;j<strlen(ch);j++)
		{
			if(ch[j]=='p')
			{
				count[0]++;
			}
			else if(ch[j]=='i')
			{
				count[1]++;
			}
			else if(ch[j]=='k')
			{
				count[2]++;
			}
			else if(ch[j]=='a')
			{
				count[3]++;
			}
			else if(ch[j]=='c')
			{
				count[4]++;
			}
			else if(ch[j]=='h')
			{
				count[5]++;
			}
			else if(ch[j]=='u')
			{
				count[6]++;
			}
		}
		
		for(l=0;l<7;l++)
		{
			if(count[l]==0)
			{
				flag=0;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	
	return 0;
}
