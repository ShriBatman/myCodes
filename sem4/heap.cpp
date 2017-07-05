//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

void heapify(int *a,int n,int x)
{
	int l=2*x+1;
	int r=2*x + 2;
	int p,t;
	
	if(l<n && a[l]>a[x])
	p=l;
	else
	p=x;
	
	if(r<n && a[p]<a[r])
	p=r;
	
	
	if(p!=x)
	{
		t=a[x];
		a[x]=a[p];
		a[p]=t;
		heapify(a,n,p);
	}
}

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=n/2 -1;i>=0;i--)
	{
		heapify(a,n,i);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
    return 0;
}

