#include<stdio.h>

int main()
{
	int i,j,k,n,m;
	scanf("%d",&n);

	int arr[n];
	int ar[n];
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		ar[i]=arr[i];
	}
	
	mergesort(arr,0,n-1);
	print(arr,n);
	
	quicksort(ar,0,n-1);
	print(ar,n);
	
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	radix(a,m);
	print(a,m);
	
	return 0;
}

int radix(int a[],int n)
{
	int i,j,r,k,div,x,y,m,t;
	m=a[0];
	
	for(i=1;i<n;i++)
	{
		if(m<a[i])
		m=a[i];
	}
	
	r=0;
	
	while(m!=0)
	{
		m=m/10;
		r++;
	}
		
	int bucket[10][n];
	int count[10];
	
	div=1;
	
	for(k=0;k<r;k++)
	{
		for(i=0;i<10;i++)
		{
			count[i]=0;
		}
		
		for(j=0;j<n;j++)
		{
			t=(a[j]/div)%10;
			bucket[t][count[t]]=a[j];
			count[t]++;
		}
		
		i=0;
		
		for(x=0;x<10;x++)
		{
			for(y=0;y<count[x];y++)
			{
				a[i]=bucket[x][y];
				i++;
			}
		}
		div=div*10;
	}
	
	
}


int print(int arr[],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n\n");
}

int mergesort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}

int merge(int arr[],int low,int mid,int high)
{
	int i,j,k,n1,n2;
	n1=mid-low+1;
	n2=high-mid;
	
	int a[n1];
	int b[n2];
	
	for(i=0;i<n1;i++)
	{
		a[i]=arr[low+i];
	}
	for(i=0;i<n2;i++)
	{
		b[i]=arr[mid+i+1];
	}
	
	i=0;
	j=0;
	k=low;
	
	while(i<n1 && j<n2)
	{
		if(a[i]>b[j])
		{
			arr[k]=b[j];
			j++;
		}
		else
		{
			arr[k]=a[i];
			i++;
		}
		k++;
	}
	
	while(i<n1)
	{
		arr[k]=a[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		arr[k]=b[j];
		j++;
		k++;
	}
	
}

int quicksort(int arr[],int l,int h)
{
	int q;
	if(l<h)
	{
		q=partition(arr,l,h);
		quicksort(arr,l,q-1);
		quicksort(arr,q+1,h);
	}
}

int partition(int arr[],int l,int h)
{
	int p,i,j,k;
	
	p=arr[h];
	k=l-1;
	for(i=l;i<h;i++)
	{
		if(arr[i]<=p)
		{
			k++;
			swap(arr,i,k);
		}
	}
	k++;
	swap(arr,k,h);
	
	return k;
}

int swap(int arr[],int x,int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}
