#include<stdio.h>

int main()
{
	int i,j,k,x,n;
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&x);
	
	k=inter(arr,n,x);
	
	if(k==-1)
	{
		printf("not found");
	}
	else
	{
		printf("%d",k);
	}
	return 0;
	
}

int inter(int arr[],int n,int x)
{
	int i,j,k,low,high,mid;
	
	low=0;
	high=n-1;
	mid=-1;
	
	while(1)
	{
		if(low==high)
		{
			return -1;
		}
		
		mid=low+((high-low)/(arr[high]-arr[low]))*(x-arr[low]);
		
		if(arr[mid]==x)
		{
			return (mid);
		}
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		if(arr[mid]<x)
		{
			low=mid+1;
		}
	}
}
