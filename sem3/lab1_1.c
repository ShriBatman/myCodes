//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<stdio.h>
#include<malloc.h>

int main()
{
	int i,j,k,l,m,n,r,t;
	
	scanf("%d",&n);
	
	char *data = (char *) malloc(sizeof(char)*(n+1));
	
	//char data[n+1];
	scanf("%s",data);
	
	for(i=0;i<n+1;i++)
	{
		for(j=i+1;j<n+1;j++)
		{
			if(data[i]==data[j])
			{
				for(k=j;k<n;k++)
				{
					data[k]=data[k+1];
				}
				n--;
				j--;
			}
		}
	}
	
	printf("%s",data);
	
	
	
	
    return 0;
}

