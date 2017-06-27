#include<stdio.h>

int gcd(int a,int b)
{
	int x,y;
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	
	if(y==0)
	return x;
	else
	gcd(y,x%y);
}

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
		
	for(i=0;i<t;i++)
	{ 
	  scanf("%d",&n);
	  int s[n];
	  
	  for(j=0;j<n;j++)
	  {
	  	scanf("%d",&s[j]);
	  }
	  
	  m=s[0];
	  for(j=1;j<n;j++)
	  {
	  	m=gcd(m,s[j]);
	  }
	  
	  for(j=0;j<n;j++)
	  {
	  	printf("%d\t",s[j]/m);
	  }
	  printf("\n");
	  
	}
	return 0;
}
