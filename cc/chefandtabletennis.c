#include<stdio.h>
#include<string.h>

int main()
{
	char s[101];
	int w,i,j,k,l,t,r;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		fflush(stdin);
		scanf("%s",&s);
		
		l=0;
		w=0;
		
		for(j=0;j<strlen(s);j++)
		{
			if(w>=10 && l>=10)
			{
				if(s[j]=='0')
				{
				  l++;
				}
				else if (s[j]=='1')
				{
				  w++;
				}
				
				if(w-l==2)
				{
					printf("WIN\n");
					break;
				}
				else if(l-w==2)
				{
					printf("LOSE\n");
					break;
				}
				
			}
			
			else
			{
			if(s[j]=='0')
			{
				l++;
			}
			else if (s[j]=='1')
			{
				w++;
			}
			
			if(w==11)
			{
				printf("WIN\n");
				break;
			}
			else if(l==11)
			{
				printf("LOSE\n");
				break;
			}
			
			
			}
		}
		
		
		
	}
	
	return 0;
}
