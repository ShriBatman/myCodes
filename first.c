#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[20]="aksh GUPTA";
	int n,i;
	n=strlen(data);
	fp=fopen("first.txt","w");
	if( fp== NULL)
	{
		printf("enable to open file");
	}
	else
	{
		printf("file opened succussfully");
		for(i=0;i<n;i++)
		{
		fputc(data[i] , fp);
		}
		fclose(fp);
	}
}
