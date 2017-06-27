#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,m,n,r,g,b,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		char s[n];
		scanf("%s",&s);
		
		r=0;
		g=0;
		b=0;
		for(j=0;j<n;j++)
		{
			if(s[j]=='R')
			r++;
			else if(s[j]=='B')
			b++;
			else if(s[j]=='G')
			g++;
		}
		
		if(g>=r && g>=b)
		printf("%d\n",r+b);
		else if(r>=g && r>=b)
		printf("%d\n",g+b);
		else if(b>=g && b>=r)
		printf("%d\n",r+g);
		
	}
	return 0;
}

