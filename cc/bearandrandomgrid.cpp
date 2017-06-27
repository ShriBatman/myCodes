//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t,y,p,q;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		vector< string > a;
		string s,x;
		cin>>l>>n;
		cin>>s;
		for(j=0;j<n;j++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		//for(r=0;r<s.length();r++)
		//cout<<s[r];
		
	//	for(j=0;j<n;j++)
	//	{
	//		for(m=0;m<n;m++)
	//		cout<<a[j][m];
	//	}
		
		
		k=0;
		for(j=0;j<n;j++)
		{
			for(m=0;m<n;m++)
			{
				if(a[j][m]=='.')
				{
					//cout<<j<<m;
					p=j; 
					q=m; 
					y=0;
					for(r=0;r<l;r++)
					{
						int w=0;
						if(s[r]=='D' && p<n-1)
						{
							if(a[p+1][q]=='.' )
							{
						//	cout<<p<<q<<"D\n";
							y++;
							p++;
							w=1;
							}
						}
						else if(s[r]=='U' && p>0)
						{
							if(a[p-1][q]=='.' ){
							//cout<<p<<q<<"U\n";
							y++;
							p--;
							w=2;}
						}
						else if(s[r]=='R' && q<n-1)
						{
						    if(a[p][q+1]=='.' ){
						    //cout<<p<<q<<"R\n";
							y++;
							q++;
							w=3;}
						}
						else if(s[r]=='L' && q>0)
						{
							if(a[p][q-1]=='.' ){
							//cout<<p<<q<<"L\n";
							y++;
							q--;
							w=4;}
						}
						
						if(w==0)
						{
							break;
						}
					}
					k=k^y;
				}
			}
		}
		
		cout<<k<<"\n";
	}
	
    return 0;
}

