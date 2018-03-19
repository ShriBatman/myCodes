//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int prime[10000009];

void fastscan(long long int &x){
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-'){
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar()) x = (x<<1) + (x<<3) +c -48;
        if(neg) x *=-1;
}

/*void fastscan(long long int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
*/
void check(){
	prime[0]=0;
	for(int i=1;i<=10000000;i++){
		prime[i]=1;
	}
	
	for(int i=2;i*i<=10000000;i++){
		if(prime[i]==1){
			for(int j=2;j*i<=10000000;j++){
				prime[i*j]=0;
			}
		}
	}
}

int main()
{
	//i am vengence i am the night i am Batman
	check();
	long long int i,j,k,l,n,r,t,m;
	fastscan(n);
	
	for(i=0;i<n;i++){
		fastscan(k);
		if(prime[k]==1) cout<<"NO\n";
		else{
			m=(long long int)sqrt(k);
			if(m*m==k && prime[m]==1) cout<<"NO\n";
			else cout<<"YES\n";
			

		}
	}
	
    return 0;
}
