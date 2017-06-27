#include<stdio.h>
#include<conio.h>

int bubble(int a[],int n);

int main()
{
	int i,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n);
}

int bubble(int a[],int n)
{
	int j,k,t,temp;
	for(j=0;j<n-1;j++)
	{
		for(t=0;t<n-j-1;t++)
		{
		if(a[t]>a[t+1])
		{
			temp=a[t+1];
			a[t+1]=a[t];
			a[t]=temp;
		}
		printf("%d\t",a[t]);
		}
		printf("\n");
	}
	printf("finally sorted\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",a[k]);
	}
}
