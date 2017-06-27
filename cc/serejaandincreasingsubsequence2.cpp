#include <bits/stdc++.h>
using namespace std;
 
int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }
 
    return r;
}
 
int LongestIncreasingSubsequenceLength(int v[],int x,int y,int n) {
    std::vector<int> tail(n, 0);
    int length = 1;
 
    tail[0] = v[x-1];
    for (size_t i = x; i < y; i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            tail[length++] = v[i];
        else
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }
 
    return length;
}


int main()
{
	int i,j,k,l,m,n,t,r,x,z,y;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		
		int a[n];
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&l,&r);
			z=LongestIncreasingSubsequenceLength(a,l,r,n);
			printf("%d\n",z);
			
		}
		
		
	}
	
	return 0;
}

