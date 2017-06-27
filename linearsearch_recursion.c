#include<stdio.h>
#include<conio.h>

int linear_r(int a[],int p,int n,int x);

void main()
{
	int i,n,x,p,y;
	p=0;
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
	linear_r(a,p,n,x);
}

int linear_r(int a[],int p,int n,int x)
{
	if(p<n && a[p]==x)
	{
	printf("found\t%d at position\t%d\n",x,p);
	}
	if(p>=n)
	{
		return 0;
	}
	linear_r(a,(p+1),n,x);
}
