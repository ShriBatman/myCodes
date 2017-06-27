#include<bits/stdc++.h>

using namespace std;
/*
bool prime[1000000+7];


void Sieve(long long int n)
{
    memset(prime, true, sizeof(prime));
    
    prime[0]=prime[1]=false;
    
    for (long long int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (long long int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
*/

int IsPrime(long long int number) {
	if(number==0 || number ==1)
	return 0;
    if (number <= 3 && number > 1) 
    return 1;            
    else if (number%2==0 || number%3==0) 
    return 0;
    else {
        long long int i;
        for (i=5; i*i<=number; i+=6) {
            if (number % i == 0 || number%(i + 2) == 0) 
                return 0;
        }
       return 1; 
    }
}

int main()
{
	//std::ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long int i,j,r,x,y,k,n,m,z,q;
	
	//Sieve(1000000+7);
	
	cin>>x>>y;
	
	r=0;
	for(i=x;i<=y;i++)
	{
        z=0;
		//if(IsPrime(i)==1)
		//{
			k=i;
			q=0;
			while(k>0)
			{
				n=k%10;
				q++;
				if(n==0 || n==1 || n==4 || n==6 || n==8 || n==9)
				{
					if(q==2)
					{
						i=i+10;
					}
					else if(q==3)
					i=i+100;
					else if(q==4)
					i=i+1000;
					else if(q==5)
					i=i+10000;
					else if(q==6)
					i=i+100000;
					else if(q==7)
					i=i+1000000;
					else if(q==8)
					i=i+10000000;
					else if(q==9)
					i=i+100000000;
					else if(q==10)
					i=i+1000000000;
					else if(q==11)
					i=i+10000000000;
					else if(q==12)
					i=i+100000000000;
					else if(q==13)
					i=i+1000000000000;
					else if(q==14)
					i=i+10000000000000;
					else if(q==15)
					i=i+100000000000000;
					
                    z=1;
					break;
				}
				k=k/10;
			}
			if(z==0 && IsPrime(i)==1)
			{
				r++;
			}
		//}
	}
	
	cout<<r<<endl;
	
	return 0;
}
