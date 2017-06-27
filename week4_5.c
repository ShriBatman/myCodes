#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp,*pf;
	int i,j,k;
	char a[2][50];
	char b[5][50];
	fp=fopen("week4 5a.txt","r");
	if(fp==NULL)
	{
		printf("unable to open the file\n");
	}
	else
	{
		printf("file opened succussfully\n");
		for(i=0;i<2;i++)
		{
		
		fgets(a[i],50,fp);
		}
		fclose(fp);		
	}
	
	pf=fopen("week4 5b.txt","r");
	if(pf==NULL)
	{
		printf("unable to open the file\n");
	}
	else
	{
		printf("file opened succussfully\n");
		for(i=0;i<5;i++)
		{
		
		fgets(b[i],50,pf);
		}
		fclose(pf);
	}
	
	for(i=0;i<5;i++)
	{
		if(i<2)
		{
			puts(a[i]);
		}
		puts(b[i]);
	}


}
