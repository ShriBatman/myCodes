#include<stdio.h>

void swap(long long int arr[],int x,int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}

int partition(long long int arr[],int lb,int ub)
{
	int i,j;
	i=lb-1;
	long long int p=arr[ub];
	
	for(j=lb;j<ub;j++)
	{
		if(arr[j]<=p)
		{
			i++;
			swap(arr,i,j);
		}
	}
	i=i+1;
	swap(arr,i,ub);
	
	return i;
}

void quicksort(long long int arr[],int lb,int ub)
{
	int q;
	if(lb<ub)
	{
		q=partition(arr,lb,ub);
		quicksort(arr,q+1,ub);
		quicksort(arr,lb,q-1);
	}
}


int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	
	long long int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	quicksort(a,0,n-1);
	
	printf("%lld\n",(a[n-2] & a[n-1])*(a[n-2] | a[n-1]));
	
	return 0;
}
