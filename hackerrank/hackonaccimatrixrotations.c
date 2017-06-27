#include<stdio.h>

int main()
{
	long long int j,l,m,n,t,r,z,q;
	long long int k,u,v,w,p,i;
	scanf("%lld%lld",&n,&m);
	
	u=-1;
	v=-1;
	w=-1;
	
	for(q=0;q<m;q++)
	{
		scanf("%lld",&l);
		
		k=0;
		
		if(l%360==90)
		{
			if(u==-1)
			{
			z=-1;
			for(t=0;t<n;t++)
			{
				z++;
				r=n-1;
				for(j=0;j<n;j++)
				{
					p=(((t+1)%7)*((t+1)%7)*((j+1)%7)*((j+1)%7))%7;
					i=(((r+1)%7)*((r+1)%7)*((z+1)%7)*((z+1)%7))%7;
					if(((p==1 || p==3 || p==6 || p==0) && (i==2 || i==4 || i==5)) || ((i==1 || i==3 || i==6 || i==0) && ( p==2 || p==4 || p==5)))
					{
					k++;
				//	printf("gfd");
					}
					
				//	printf("%lld\t%lld\t%lld\t",k,p,i);
					r--;
				}
			}
			u=k;
			}
			else
			k=u;
		}
		else if(l%360==180)
		{
			if(v==-1)
			{
			r=n;
			for(t=0;t<n;t++)
			{
				r--;
				z=n-1;
				for(j=0;j<n;j++)
				{
					p=(t+1)*(t+1)*(j+1)*(j+1);
					i=(r+1)*(r+1)*(z+1)*(z+1);
					if(((p%7==1 || p%7==3 || p%7==6 || p%7==0)&&(i%7==2 ||i%7==4 || i%7==5)) || ((i%7==1 || i%7==3 || i%7==6 || i%7==0)&&(p%7==2 ||p%7==4 || p%7==5)))
					{
						k++;
						
					}
					

					z--;
				}
			}
			v=k;
			}
			else
			k=v;
		}
		else if(l%360==270)
		{
			if(w==-1)
			{
			z=n;
			for(t=0;t<n;t++)
			{
				z--;
				for(j=0;j<n;j++)
				{
					p=(t+1)*(t+1)*(j+1)*(j+1);
					i=(j+1)*(j+1)*(z+1)*(z+1);
					if(((p%7==1 || p%7==3 || p%7==6 || p%7==0)&&(i%7==2 ||i%7==4 || i%7==5)) || ((i%7==1 || i%7==3 || i%7==6 || i%7==0)&&(p%7==2 ||p%7==4 || p%7==5)))
					k++;
				}
			}
			w=k;
			}
			else
			k=w;
		}
		else if(l%360==0)
		k=0;
		
		printf("%lld\n",k);
	}
	
	return 0;
}
