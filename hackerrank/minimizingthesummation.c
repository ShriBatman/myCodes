#include<stdio.h>


void swap(int arr[],int x,int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}

int partition(int arr[],int lb,int ub)
{
	int i,j;
	i=lb-1;
	int p=arr[ub];
	
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

void quicksort(int arr[],int lb,int ub)
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
	int k,n,m,i,j,l,t;
	long long int r;
	scanf("%d%d",&n,&k);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quicksort(a,0,n-1);
	
	r=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			r=r+(a[i]-a[j])*(a[i]-a[j]);
		}
	}
	
	printf("%lld\n",r);
	
	return 0;
}
