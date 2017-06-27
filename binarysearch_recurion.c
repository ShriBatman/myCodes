#include<stdio.h>
#include<conio.h>

int binary(int a[],int x,int n,int begin,int end);

int main()
{
	int t,i,n,x,begin,end;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers in ascending order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search\n");
	scanf("%d",&x);
	begin=0;
	end=n-1;
	binary(a,x,n,begin,end);
}

int binary(int a[],int x,int n,int begin,int end)
{
	int mid;
	mid=(begin+end)/2;

if(begin<=end)
{
		if(a[mid]>x)
		{
			end=mid-1;
			binary(a,x,n,begin,end);
		}
		if(a[mid]<x)
		{
			begin=mid+1;
			binary(a,x,n,begin,end);
		}
		if(a[mid]==x)
		{
			printf("found\t%d at position\t%d",x,mid);
		}
	
}
}
