#include<bits/stdc++.h>

using namespace std;

unsigned long long int sub(string a,int n)
{
    unsigned long long int opsize = pow(2, n);
    int z,k,d,x;
    unsigned long long int r=0;
 
    for (unsigned long long int counter = 1; counter < opsize; counter++)
    {
    	z=0;
    	k=3;
    	d=1;
        for (int j = n-1; j >=0 ; j--)
        {
            if (counter & (1<<j))
            {
            	//if(k>0)
            	{
            		k--;
            		x=a[j]-'0';
					z=x*d+z;
					d=d*10;		
            	}
			}
        }
        					cout<<z<<endl;

        
        if(z%8==0)
        {
        	r++;
        	r=r%1000000007;
        	//cout<<z<<endl;
		}
    }
    
    return r;
}

int main()
{
	unsigned long long int i;
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	i=sub(s,n);
	cout<<i<<endl;
	
	return 0;
}
