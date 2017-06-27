#include<stdio.h>
#include<string.h>

int main()
{
	int i,l,m,t;
	long long int n,j,k,r;
	
	scanf("%d",&t);
	char s[16];
	
	int flag;
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		k=1;
		r=1;
		m=-1;
		flag=0;
		
		for(j=0;j<n;j++)
		{
			scanf("%s",s);
			
			l=strlen(s);
			
			if(s[l-1]=='n' && s[l-2]=='a' && s[l-3]=='m')
			{
				if(flag==0)
				k++;
			}
			else
			r++;
			
			if(k-r==2 && flag==0)
			{
				m=1;
				flag=1;
			}
			else if(r-k==3 && flag==0)
			{
				m=0;
				flag=1;
			}
			else if(flag==0)
			m=-1;
		}
		
		if(m==1)
		printf("superheroes\n");
		else if(m==0)
		printf("villains\n");
		else if(m==-1)
		printf("draw\n");
	}
	
	return 0;
}
