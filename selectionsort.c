#include<stdio.h>
#include<conio.h>

int selection_sort(int a[],int n);

int main()
{
	int i,n;
	printf("size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	
}

int selection_sort(int a[],int n)
{
	int min,j,k,t,temp;
	for(j=0;j<n;j++)
	{
		min=j;
		for(t=j;t<n;t++)
		{
			if(a[min]>a[t])
			{
				min=t;
			}
		}
		temp=a[j];
		a[j]=a[min];
		a[min]=temp;	
	}
	
	for(k=0;k<n;k++)
	{
	printf("%d\t",a[k]);	
	}
}
