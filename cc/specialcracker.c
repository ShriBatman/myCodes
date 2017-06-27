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
	int i,j,k,l,m,n,r,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		int a[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
	
	    quicksort(a,0,n-1);
	    
	    for(j=0;j<n;j++)
	    {
	    	if(a[j]!=a[j+1] && a[j]!=a[j-1])
	    	printf("%d\n",a[j]);
		}
	}
	
	return 0;
	
}

