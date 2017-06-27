#include<stdio.h>

int bubblesort(int arr[],int n)
{
	int j,k,t;
	
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-j-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				t=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=t;
			}
		}
		
	}
	
}

int main()
{
	int i,l;
	scanf("%d",&l);
	
	int arr[l];
	
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubblesort(arr,l);
	
	for(i=0;i<l;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
