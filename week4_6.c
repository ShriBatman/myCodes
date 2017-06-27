#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
	int sno;
	char a[20];
	char branch[3];
};
int main()
{
	FILE *fp;
	struct student s[3]={{1,"aksh gupta","cse"},{2,"vishad prajapati","ece"},{3,"mohit vasuja","ece"}};
	fp=fopen("week4 6.txt","w");
	if(fp==NULL)
	{
		printf("unable to cerate the file\n");
	}
	else
	{
		printf("file created succussfully\n");
		fwrite(s,sizeof(s),sizeof(struct student),fp);
	}
	fclose(fp);
	
}
