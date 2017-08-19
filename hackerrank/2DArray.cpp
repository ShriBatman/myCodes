//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,sum,max;
	
	int a[6][6];
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			cin>>a[i][j];
		}
	}
	
				max=-70;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum=0;
			for(k=i;k<i+3;k++){
				for(m=j;m<j+3;m++){
					if(!(k==i+1 && (m==j || m==j+2))){
						//cout<<a[k][m];
						sum=sum+a[k][m];
					}
				}
				//cout<<"\n";
			}
			//cout<<"\n";
			if(max<sum) max=sum;
		}
	}
	
	cout<<max;
	
	
    return 0;
}

