#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fp,*pf;
	int i,j,k;
	char a[10]="aksh gupta";
	int b[5]={1,2,5,60,34};
	fp=fopen("week4 4a.txt","w");
	if(fp==NULL)
	{
		printf("unable to create the file\n");
	}
	else
	{
		printf("file created succussfully\n");
		fputs(a,fp);
		fprintf(fp,"%s","\n");
		for(i=0;i<5;i++)
		{
		putw(b[i],fp);
	    }
	}
	fclose(fp);
	fp=fopen("week4 4a.txt","r");
	if(pf==NULL)
	{
		printf("unable to create the file\n");
	}
	else
	{
		printf("file created succussfully\n");
		fgets(a,11,fp);
		puts(a);
		for(j=0;j<5;j++)
		{
			getw(fp);
		}
		pf=fopen("week4 4b.txt","w");
		if(pf==NULL)
		{
			printf("unable to open the file\n");
		}
		else
		{
			printf("file created succussfully\n");
			fputs(a,pf);
			for(j=0;j<5;j++)
			{
				putw(b[j],pf);
			}
		}
		fclose(pf);
	}
	fclose(fp);
}
