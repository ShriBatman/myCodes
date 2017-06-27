#include<stdio.h>

int main()
{
	int i,j,q,k,l,n,e,t;
	long long int m,sum,s,r;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d%lld",&n,&k,&e,&m);
		long long int a[n-1];
		
		for(j=0;j<n-1;j++)
		{
			sum=0;
			for(l=0;l<e;l++)
			{
				scanf("%lld",&a[j]);
				sum=sum+a[j];
			}
			a[j]=sum;
		}
		
		sum=0;
		for(q=0;q<e-1;q++)
		{
			scanf("%lld",&s);
			sum=sum+s;
		}
		s=sum;
		
		mergesort(a,0,n-2);
		
		r=a[n-k-1]-s+1;
		
		if(r>m && r>0)
		{
			printf("Impossible\n");
		}
		else if(r<=m && r>0)
		{
			printf("%lld\n",r);
		}
		else if(r<=0)
		{
			printf("0\n");
		}
			
	}
	
	return 0;
}

int merge(long long int arr[],int lb,int x,int ub)
{
	int k,t,m,n;
	int i=x-lb+1;
	int j=ub-x;
	
	long long int a[i];
	long long int b[j];
	
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


int mergesort(long long int arr[],int lb,int ub)
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
