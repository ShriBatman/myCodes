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
	long long int p;
	i=lb-1;
	p=arr[ub];
	
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
	long long int i,j,k,l;
	long long int a[5];
	
	for(i=0;i<5;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	quicksort(a,0,4);
	
	printf("%lld\t%lld",a[0]+a[1]+a[2]+a[3],a[1]+a[2]+a[3]+a[4]);
	
	return 0;
}
