#include<stdio.h>

int swap(int a[],int w,int z)
{
	int temp;
	temp=a[w];
	a[w]=a[z];
	a[z]=temp;
}

int partition(int a[],int lb,int ub)
{
	int i,j,p;
	i=lb-1;
	p=a[ub];
	
	for(j=lb;j<ub;j++)
	{
		if(a[j]<=p)
		{
			i++;
			swap(a,i,j);
		}
	}
	i=i+1;
	swap(a,i,ub);
	
	return i;
}

int quicksort(int a[],int lb,int ub)
{
	int q;
	if(lb<ub)
	{
		q=partition(a,lb,ub);
		quicksort(a,q+1,ub);
		quicksort(a,lb,q-1);
	}
}

int main()
{
	int m,x,y,n,k,t,i,j;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&m,&x,&y);
		
		int a[m];
		n=0;
		
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		
		quicksort(a,0,m-1);
		
		for(j=0;j<m;j++)
		{
			if(100-a[j]>x*y && j==m-1)
			{
				n=n+100-a[j]-x*y;
			}
		if(a[j]-1>x*y && j==0)
		{
			n=n+a[0]-1-(x*y);
		}
		if(a[j+1]-a[j]-1>2*x*y && j<m-1)
		{
			n=n+a[j+1]-a[j]-1-(2*x*y);
		}
		
		}
		
		printf("%d\n",n);
	}
	return 0;
}
