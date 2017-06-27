#include<stdio.h>

int radixsort(int arr[],int n)
{
	int i,j,k,m,t,r,q,div;
	m=arr[0];
	
	for(j=1;j<n;j++)
	{
		if(m<arr[j])
		{
			m=arr[j];
		}
	}
	
	r=0;
	while(m!=0)
	{
		m=m/10;
		r++;
	}
	
	int bucket[10][n];
	int b[10];
	div=1;
	for(k=0;k<r;k++)
	{
		for(q=0;q<10;q++)
		{
			b[q]=0;
		}
		for(j=0;j<n;j++)
		{
			t=(arr[j]/div)%10;
			bucket[t][b[t]]=arr[j];
			b[t]++;
		}
		j=0;
		for(i=0;i<10;i++)
		{
			for(q=0;q<b[i];q++)
			{
				arr[j]=bucket[i][q];
				j++;
			}
		}
		div=div*10;
		
	}
}

int main()
{
	int i,l;
	scanf("%d",&l);
	
	int arr[l];
	
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	radixsort(arr,l);
	
	for(i=0;i<l;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
