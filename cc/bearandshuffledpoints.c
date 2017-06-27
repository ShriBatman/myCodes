#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	long long int x[n][2];
	
	long long int xmax=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&x[i][0],&x[i][1]);
		
		for(j=0;j<i;j++)
		{
			if(xmax<(x[i][0]-x[j][0])*(x[i][0]-x[j][0]) + (x[i][1]-x[j][1])*(x[i][1]-x[j][1]))
			{
				xmax=(x[i][0]-x[j][0])*(x[i][0]-x[j][0]) + (x[i][1]-x[j][1])*(x[i][1]-x[j][1]);
			}	
		}
		
		printf("%lld\n",xmax);
	}
	
	return 0;
}
