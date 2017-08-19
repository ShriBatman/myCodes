//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	long long int array[25];
	
	for(i=0;i<25;i++)
	{
		cin>>array[i];
	}
	
	cin>>k;
	
	r=0;
	for(i=0;i<25;i++)
	{
		if(array[i]==k) r++;
	}
	
	if(r==0)
	cout<<"Not Present\n";
	else
	cout<<"Present\n"<<r;
	
    return 0;
}

