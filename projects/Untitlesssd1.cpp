#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[100001];
char sub1[100001];
char sub2[100001];
char sub3[100001];

struct suffix
{
    int index;
    int rank[2];
};
 
int cmp(struct suffix a, struct suffix b)
{
    return (a.rank[0] == b.rank[0])? (a.rank[1] < b.rank[1] ?1: 0):
               (a.rank[0] < b.rank[0] ?1: 0);
}
 

int *buildSuffixArray(char *sub1, int n)
{
    struct suffix suffixes[n];
 
    for (int i = 0; i < n; i++)
    {
        suffixes[i].index = i;
        suffixes[i].rank[0] = sub1[i] - 'a';
        suffixes[i].rank[1] = ((i+1) < n)? (sub1[i + 1] - 'a'): -1;
    }
 
    sort(suffixes, suffixes+n, cmp);
 
    int ind[n];
    
    for (int k = 4; k < 2*n; k = k*2)
    {
        int rank = 0;
        int prev_rank = suffixes[0].rank[0];
        suffixes[0].rank[0] = rank;
        ind[suffixes[0].index] = 0;
 
        for (int i = 1; i < n; i++)
        {
            if (suffixes[i].rank[0] == prev_rank && suffixes[i].rank[1] == suffixes[i-1].rank[1])
            {
                prev_rank = suffixes[i].rank[0];
                suffixes[i].rank[0] = rank;
            }
            else
            {
                prev_rank = suffixes[i].rank[0];
                suffixes[i].rank[0] = ++rank;
            }
            ind[suffixes[i].index] = i;
        }
 
        for (int i = 0; i < n; i++)
        {
            int nextindex = suffixes[i].index + k/2;
            suffixes[i].rank[1] = (nextindex < n)?suffixes[ind[nextindex]].rank[0]: -1;
        }
 
        sort(suffixes, suffixes+n, cmp);
    }
 
    int *suffixArr = new int[n];
    for (int i = 0; i < n; i++)
        suffixArr[i] = suffixes[i].index;
 
    return  suffixArr;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

int lcs( char *sub3, char *sub2, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (sub3[m-1] == sub2[n-1])
     return 1 + lcs(sub3, sub2, m-1, n-1);
   else
     return max(lcs(sub3, sub2, m, n-1), lcs(sub1, sub2, m-1, n));
}

int commonPrefixUtil(char *sub3, char *sub2,int m,int n)
{
    string result;
    
    for (int i=0, j=0; i<=m-1&&j<=n-1; i++,j++)
    {
        if (sub3[i] != sub2[j])
            break;
            
        result.push_back(sub3[i]);
    }
 
    return (result.length());
}

int main()
{
	int i,j,l,r,m,n,q,t,p,x;
	scanf("%d%d",&n,&q);
	
	scanf("%s",&s);
	
	long long int k;
	for(i=0;i<q;i++)
	{
		scanf("%d%d",&l,&r);
		m=0;
		if(l==r)
		printf("%d\n",r);
		else
		{
		for(j=l;j<=r;j++)
		{
			sub1[m]=s[j];
			m++;
		}
		sub1[m]='\0';
		
		int *suffixarr = buildSuffixArray(sub1,m);
		
		k = m-suffixarr[0];
		
		for(j=0;j<m-1;j++)
		{
			p=0;
			for(t=suffixarr[j];t<m;t++)
			{
				sub3[p]=sub1[t];
				p++;
			}
			sub3[p]='\0';
			
			x=0;
			for(t=suffixarr[j+1];t<m;t++)
			{
				sub2[p]=sub1[t];
				x++;
			}
			sub2[x]='\0';
			
					printf("%lld%d\n",k,suffixarr[j]);

			int ans=commonPrefixUtil(sub3,sub2,p,x);
			k = k+(m-suffixarr[j+1])-ans;
					printf("%lld%d\n",k,ans);

		}
		
		printf("%lld\n",k);
		}
	}
	return 0;
}
