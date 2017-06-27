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
	int n,m,l,b,i,j,k,t,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
	scanf("%d",&n);
	int arr[n];
	
	for(m=0;m<n;m++)
	{
		scanf("%d",&arr[m]);
	}
	quicksort(arr,0,n-1);
	
	l=0;
	b=0;
	
	for(j=n-1;j>=0;j--)
	{
		if(arr[j]==arr[j-1] && l==0)
		{
			l=arr[j];
			j--;
		}
		else if(l!=0 && arr[j]==arr[j-1] && b==0)
		{
			b=arr[j];
			break;
		}
	}
	
	if(l!=0 && b!=0)
	{
		printf("%d\n",l*b);
	}
	else
	{
		printf("-1\n");
	}
	
	}
	
	return 0;
}

