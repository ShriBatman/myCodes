#include<stdio.h>

int swap(int arr[],int x,int y)
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

int quicksort(int arr[],int lb,int ub)
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
	int i,j,k,l,n,t;
	float m;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
		
		int arr[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		
		quicksort(arr,0,n-1);
		
		m=0;
		for(j=k;j<n-k;j++)
		{
			m=m+arr[j];
		}
		
		printf("%f\n",m/(n-2*k));	
	}
	return 0;
}
