#include<stdio.h>

int main()
{
	int t,j,i,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
	
	scanf("%d",&n);
	long long int a[n];
	
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		
		quicksort(a,0,n-1);
		
		printf("%lld\n",a[0]+a[1]);
		
	}
	
	return 0;
}

int swap(long long int arr[],int x,int y)
{
	long long int temp;
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
};

int quicksort(long long int arr[],int lb,int ub)
{

     int q;
	if(lb<ub)
	{
		q=partition(arr,lb,ub);
		quicksort(arr,q+1,ub);
		quicksort(arr,lb,q-1);
	}
}

