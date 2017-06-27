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
};

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
	int i,j,k,l,n,r,t;
	scanf("%d%d",&n,&k);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quicksort(a,0,n-1);
	
	t=0;
	r=0;
	j=0;
	
	while(j<n)
	{
			while((a[t]+k)>=a[j])
			{
				j++;
			}
			t=j-1;
			r++;
			
			while((a[t]+k)>=a[j])
			{
				j++;
			}
			t=j;
	}
		
	printf("%d",r);
	
	return 0;
}
