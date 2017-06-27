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
	int i,j,p;
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
	int i,j,m,n;
	scanf("%d",&n);
	scanf("%d",&m);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quicksort(a,0,n-1);
	
	long long int k=0;
	long long int t=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%m==0)
		j=a[i]/m;
		else
		j=a[i]/m + 1;
		
		if(j>t)
		{
			k=k+j;
			t=j;
		}
		else
		{
			t=t+1;
			k=k+t;
		}
	}	
	
	printf("%lld\n",k);
	
	return 0;
}
