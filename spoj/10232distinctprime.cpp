//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int lucky[1001];

void distinctprime(){
	
	int i,j,k,n,p;
	
	i=0;
	n=30;

	while(i<=1000){
		
		k=0;
		p=n;
		for(j=2;j<=sqrt(n);j++){		
			if(n%j==0){
				k++;
				while(n%j==0){
					n=n/j;
				}
			}
		}
		if(n!=1){
			k++;
		}
	
		if(k>=3){
			lucky[i]=p;
			i++;
		}
		n=p+1;
	}
}


int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	distinctprime();
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		cout<<lucky[n-1]<<"\n";
	}
	
    return 0;
}


/*2 3 5   30
2 3 7   42
4 3 5   60
2 3 11  66
2 3 13  78
4 3 7   84
2 9 5   90
2 3 17  102
3 5 7   105
2 3 19  114
2 3 23  138
3 5 11  165
2 3 29  174
3 5 13  195*/
