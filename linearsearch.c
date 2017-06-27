#include<stdio.h>
#include<conio.h>

int linear(int a[],int n,int x);

int main()
{
	int i,n,x;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to find\n");
	scanf("%d",&x);
	linear(a,n,x);
}

int linear(int a[],int n,int x)
{
	int j,k,t;
	for(j=0;j<n;j++)
	{
		if(a[j]==x)
		{
			printf("found %d position %d",x,j);
		}
	}
}
