#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l,m,n,r,t;
	long long int x;
	string s;
	cin>>s;
	vector<int> b;
	vector<int>::iterator it;

	
	
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='a')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+1;
				b.push_back(k);
			}
			else
			b.push_back(1);
		}
		else if(s[i]=='b')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+2;
				b.push_back(k);
			}
			else
			b.push_back(2);
		}
		else if(s[i]=='c')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+3;
				b.push_back(k);
			}
			else
			b.push_back(3);
		}
		else if(s[i]=='d')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+4;
				b.push_back(k);
			}
			else
			b.push_back(4);
		}
		else if(s[i]=='e')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+5;
				b.push_back(k);
			}
			else
			b.push_back(5);
		}
		else if(s[i]=='f')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+6;
				b.push_back(k);
			}
			else
			b.push_back(6);
		}
		else if(s[i]=='g')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+7;
				b.push_back(k);
			}
			else
			b.push_back(7);
		}
		else if(s[i]=='h')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+8;
				b.push_back(k);
			}
			else
			b.push_back(8);
		}
		else if(s[i]=='i')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+9;
				b.push_back(k);
			}
			else
			b.push_back(9);
		}
		else if(s[i]=='j')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+10;
				b.push_back(k);
			}
			else
			b.push_back(10);
		}
		else if(s[i]=='k')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+11;
				b.push_back(k);
			}
			else
			b.push_back(11);
		}
		else if(s[i]=='l')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+12;
				b.push_back(k);
			}
			else
			b.push_back(12);
		}
		else if(s[i]=='m')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+13;
				b.push_back(k);
			}
			else
			b.push_back(13);
		}
		else if(s[i]=='n')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+14;
				b.push_back(k);
			}
			else
			b.push_back(14);
		}
		else if(s[i]=='o')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+15;
				b.push_back(k);
			}
			else
			b.push_back(15);
		}
		else if(s[i]=='p')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+16;
				b.push_back(k);
			}
			else
			b.push_back(16);
		}
		else if(s[i]=='q')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+17;
				b.push_back(k);
			}
			else
			b.push_back(17);
		}
		else if(s[i]=='r')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+18;
				b.push_back(k);
			}
			else
			b.push_back(18);
		}
		else if(s[i]=='s')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+19;
				b.push_back(k);
			}
			else
			b.push_back(19);
		}
		else if(s[i]=='t')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+20;
				b.push_back(k);
			}
			else
			b.push_back(20);
		}
		else if(s[i]=='u')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+21;
				b.push_back(k);
			}
			else
			b.push_back(21);
		}
		else if(s[i]=='v')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+22;
				b.push_back(k);
			}
			else
			b.push_back(22);
		}
		else if(s[i]=='w')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+23;
				b.push_back(k);
			}
			else
			b.push_back(23);
		}
		else if(s[i]=='x')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+24;
				b.push_back(k);
			}
			else
			b.push_back(24);
		}
		else if(s[i]=='y')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+25;
				b.push_back(k);
			}
			else
			b.push_back(25);
		}
		else if(s[i]=='z')
		{
			if(s[i]==s[i-1] && i>0)
			{
				k=b[i-1]+26;
				b.push_back(k);
			}
			else
			b.push_back(26);
		}
		
	}
	
	//for(i=0;i<s.length();i++)
	//cout<<b[i];
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>x;
		
		it = find(b.begin(), b.end(), x);
		if(it!=b.end())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;

		
	}
	
	
	
	return 0;
}
