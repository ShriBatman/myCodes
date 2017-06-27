#include<stdio.h>
int main()
{
	unsigned long int n,i,k;
	scanf("%u",&n);

	while(n!=0)
	{
		int flag=1;
	unsigned long int t[n],s[n];
	for(i=0;i<n;i++)
	{
		scanf("%u",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		k=t[i];
		s[k]=i+1;
	}
	for(k=1,i=0;k<=n,i<n;k++,i++)
	{
		if(t[i]!=s[k])
		{
			flag=0;
		}
	}
	if(flag==1)
	{
	printf("ambiguous\n");
	}
	if(flag==0)
	{
		printf("not ambiguous\n");
	}
	scanf("%u",&n);
	}
	return 0;
}
