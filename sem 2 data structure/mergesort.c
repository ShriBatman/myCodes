#include<stdio.h>

int merge(int arr[],int lb,int x,int ub)
{
	int k,t,m,n;
	int i=x-lb+1;
	int j=ub-x;
	
	int a[i];
	int b[j];
	
	for(k=0;k<i;k++)
	{
		a[k]=arr[lb+k];
	}
	
	for(t=0;t<j;t++)
	{
		b[t]=arr[x+1+t];
	}
	
	m=0;
	n=0;
	k=lb;
	
	while(m<i && n<j)
	{
		if(a[m]>=b[n])
		{
			arr[k]=b[n];
			n++;
		}
		else
		{
			arr[k]=a[m];
			m++;
		}
		k++;
	}
	
	while(m<i)
	{
		arr[k]=a[m];
		m++;
		k++;
	}
	
	while(n<j)
	{
		arr[k]=b[n];
		n++;
		k++;
	}
}

/*sdfs

sdgfsd*/

int mergesort(int arr[],int lb,int ub)
{
	int x;
	if(lb<ub)
	{
		x=(lb+ub)/2;
		mergesort(arr,lb,x);
		mergesort(arr,x+1,ub);
		merge(arr,lb,x,ub);
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
	
	mergesort(arr,0,l-1);
	
	for(m=0;m<l;m++)
	{
		printf("%d\n",arr[m]);
	}
	
	return 0;
}
