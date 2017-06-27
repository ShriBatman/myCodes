#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fp,*pf;
	int i,j,k,s;
	char a[5][20];
	char b[5][20];
	char temp[20];
	printf("enter names");
	for(i=0;i<5;i++)
	{
	  gets(a[i]);
	}
	
	//opening first file
	fp=fopen("week4.txt","w");
	if(fp==NULL)
	{
		printf("unable to open the file");
	}
	else
	{
		printf("file succussfully created");
		for(j=0;j<5;j++)
		{
			//writing string by string in file
		fputs(a[j],fp);
		
		//changing line in the file
		fprintf(fp,"%s","\n");
		}
	}
	fclose(fp);
	
	//reading first file	
	fp=fopen("week4.txt","r");
	if(fp==NULL)
	{
		printf("unable to open file");
	}
	else
	{
		printf("file opened succussfully");
		for(k=0;k<5;k++)
		{
			fgets(b[k],20,fp);
			puts(b[k]);
		}
		fclose(fp);
	}
	//alphabetical sorting
	for(k=0;k<5;k++)
	{
		for(i=0;i<5;i++)
		{
		s=strcmp(b[k],b[i]);
	    if( s<0 )
	    {
		strcpy(temp,b[k]);
		strcpy(b[k],b[i]);
		strcpy(b[i],temp);
	    }
	    }
	}
	
	//second file
	pf=fopen("week4a.txt","w");
	if(pf==NULL)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file created succussfully");
		for(k=0;k<5;k++)
		{
			//writing string by string
			fputs(b[k],pf);
		}
	}
	fclose(pf);
}
