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
};

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
	int l,m;
	
	scanf("%d",&l);
	
	int arr[l];
	for(m=0;m<l;m++)
	{
		scanf("%d",&arr[m]);
	}
	
	quicksort(arr,0,l-1);
	
	for(m=0;m<l;m++)
	{
		printf("%d\n",arr[m]);
	}
	
	return 0;
}

