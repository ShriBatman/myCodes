#include<stdio.h>

int insertionsort(int arr[],int n)
{
	 int j,k,temp,t;
	 
	 for(j=1;j<=n;j++)
	 {
	 	for(k=j-1;k>=0;k--)
	 	{
	 		if(arr[k-1]>arr[k])
	 		{
	 			t=arr[k];
	 			arr[k]=arr[k-1];
	 			arr[k-1]=t;
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
	
	insertionsort(arr,l);
	
	for(i=0;i<l;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
