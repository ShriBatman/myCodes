#include<bits/stdc++.h>

using namespace std;

string convert(long long value)
{
    string str(34, '0');

    for(int i = 0; i < 34; i++)
    {
        if( (1ll << i) & value)
            str[33-i] = '1';
    }

    return str;
 }

int main()
{
	long long int i,j,t,k,l,m;
	double r,p,n;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>k;
		
		string binary = convert(k);
		//cout<<binary<<"\n";
		
		p = (double)k;
		r = log2(p);
		m=r+1;
		
		n=0;

		for(j=33;j>33-m;j--)
		{
		//	cout<<binary[j]<<endl;
			if(binary[j] == '0')
			{
				n=n+pow(2,33-j);
			}
		}
		
		l = (long long int)n;
		cout<<l<<endl;
	}
	return 0;
}
