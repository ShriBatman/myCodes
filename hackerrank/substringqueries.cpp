#include<bits/stdc++.h>

using namespace std;

int max(int a, int b)
{   return (a > b)? a : b; }
 
/* Returns length of longest common substring of X[0..m-1] 
   and Y[0..n-1] */
int LCSubStr(string X, string Y, int m, int n)
{
    // Create a table to store lengths of longest common suffixes of
    // substrings.   Notethat LCSuff[i][j] contains length of longest
    // common suffix of X[0..i-1] and Y[0..j-1]. The first row and
    // first column entries have no logical meaning, they are used only
    // for simplicity of program
    int LCSuff[m+1][n+1];
    int result = 0;  // To store length of the longest common substring
 
    /* Following steps build LCSuff[m+1][n+1] in bottom up fashion. */
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
	int i,j,k,q,l,m,n,t,r,s;
	string a;
	vector<string> b;
	cin>>n>>q;
	
	for(i=0;i<n;i++)
	{
		cin>>a;
		b.push_back(a);
	}
	
	for(i=0;i<q;i++)
	{
		cin>>r>>s;
		int x=b[r].length();
		int y=b[s].length();
		
		cout<<LCSubStr(b[r],b[s],x,y)<<endl;;
	}
	return 0;
}
