//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int primechk[10000009];

void preprocess()
{
    int i, j;
    primechk[0]=0;
    primechk[1]=0;
    for(i=2 ; i<=10000000 ; i++)
    {
        primechk[i]=1;
    }
    for(i=2 ; i<=10000000 ; i++)
    {
        if(primechk[i]==1)
        {
            for(j=2 ; i*j<=10000000 ; j++)
            {
                primechk[i*j]=0;
            }
        }
    }
}

int main()
{
	preprocess();
	long long int count,i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>l>>r;
		
		count = 0;
		for(j=l;j<=r;j++){
			count += __builtin_popcount(j);
		}
		
		k=0;
		if(count == 1){
			cout<<"1\n";
		}
		else{
		for(j=count;j<10000000;j++){
			if(primechk[j]==1) {
			cout<<j*2<<"\n";
			k=1;
			break;
			}
		}
		if(k==0){
			
			for(j=1;j<=sqrt(count);j++){
			if(count%j==0){
				if(count/j == j) k++;
				else k+=2;
			}
		}
		cout<<count*k<<"\n";
			
		}
		}
}
	
    return 0;
}

