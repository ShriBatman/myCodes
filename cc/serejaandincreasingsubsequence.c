#include<stdio.h>
#include<stdlib.h>

int lis( int arr[], int l,int r,int n )
{
	int *lis, i, j, max = 0;
	
	lis = (int*) malloc ( sizeof( int ) * n );

	for (i = 0;i < n;i++ )
		lis[i] = 1;

	for (i = l;i < r;i++ )
		for (j = l-1; j < i; j++ ) 
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;

	for (i = 0;i < n;i++)
		if (max < lis[i])
			max = lis[i];

	//free(lis);

	return max;
}

int main()
{
	int i,j,k,l,m,n,t,r,x,z,y;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		
		int a[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&l,&r);
			z=lis(a,l,r,n);
			printf("%d\n",z);
			
		}
		
		
	}
	
	return 0;
}



