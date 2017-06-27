#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int i,j,k,min,max;
	int a[10];
	int b[10];
	printf("enter numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	fp=fopen("week4 2.DAT","w");
	if(fp==NULL)
	{
		printf("unable to create file\n");
	}
	else
	{
		printf("file created succussfully\n");
		for(j=0;j<10;j++)
		{
			putw(a[j],fp);
		}
		fclose(fp);
	}
	
	//reading file
	fp=fopen("week4 2.DAT","r");
	if(fp==NULL)
	{
		printf("unable to open the file\n");
	}
	else
	{
		printf("file opened succussfully\n");
		for(k=0;k<10;k++)
		{
		b[k]=getw(fp);
		printf("%d\n",b[k]);
		}
		fclose(fp);
	}
	
	//highest and lowest elements
	min=b[0];
	max=b[0];
	for(k=0;k<10;k++)
	{
		if(b[k]<min)
		{
			min=b[k];
		}
		if(b[k]>max)
		{
			max=b[k];
		}
	}
	
	//appending in the file
	fp=fopen("week4 2.DAT","a");
	if(fp==NULL)
	{
		printf("unable to open the file\n");
	}
	else
	{
		printf("file opened succussfully\n");
		printf("minimum is %d\nmaximum is %d", putw(min,fp) , putw(max,fp));
	}
	fclose(fp);
}
