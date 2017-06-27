#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,k,r,t,p,q;
    scanf("%d",&t);
    int count=0,sum=0;
    while(t--)
    {
        count=0;sum=0;
        scanf("%d %d %d",&n,&k,&r);
            long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            
            count=count+a[i];
        }
		if(count%2!=0)
        {
            printf("-1\n");
        }
        else
        {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                count=a[i]-1;
                sum=sum+(count*k);
                sum=sum+2*(k+r);
                a[i+1]=a[i+1]-1;
            }
			else
            sum=sum+(a[i]*k);
        }
        printf("%d\n",sum);
    }
    }return 0;
}
