#include<stdio.h>

int selectionsort(int arr[],int n)
{
	int temp,j,k,m,t;
	
	for(j=0;j<n;j++)
	{
		m=arr[j];
		
		for(k=j+1;k<n;k++)
		{
			if(m>arr[k])
			{
				m=arr[k];
				t=k;
			}
		}
		
		temp=arr[j];
		arr[j]=arr[t];
		arr[t]=temp;
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
	
	selectionsort(arr,l);
	
	for(i=0;i<l;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
