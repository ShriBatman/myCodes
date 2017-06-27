#include<iostream>
using namespace std;


class stringg
{
	char s[40];
	
	public:
		void display()
		{
			cout<<s;
		}
	void getstring()
		{
			cout<<"enter string"<<endl;
				cin>>s;
			
		}
		
		int length()
		{
			int x=0;
			while(s[x]!='\0')
			{
				x++;
			}
			return x;
		}
		
		friend void concatenate(stringg s1,stringg s2)
		{
			char a[s1.length()+s2.length()];
			int i,j,k;
			for(i=0,j=0;i<s1.length(),j<s1.length();i++,j++)
			{
				a[i]=s1.s[j];
			}
			for(i=s1.length(),k=0;i<s1.length()+s2.length(),k<s2.length();i++,k++)
			{
				a[i]=s2.s[k];
			}
				cout<<a;
		}
		
		friend void copy(stringg s1,stringg s2)
		{
			int i,j;
			for(i=0,j=0;i<s2.length(),j<s2.length();i++,j++)
			{
				s1.s[i]=s2.s[j];
			}
			
			cout<<s1.s;

		}
		
		friend void compare(stringg s1,stringg s2)
		{
			int i,j,flag=0;
			for(i=0,j=0;i<s1.length(),j<s2.length();i++,j++)
			{
				if(s1.s[i]==s2.s[j])
				{
					flag=1;
				}
			}
			if(flag==1)
			{
				cout<<"strings are same";
			}
			
		}
};

int main()
{
	stringg s1;
	stringg s2;
	s1.getstring();
	s2.getstring();
	cout<<s1.length()<<endl;
	cout<<s2.length()<<endl;
	concatenate(s1,s2);
	cout<< " " <<endl;
	copy(s1,s2);
	cout<<"\n";
	compare(s1,s2);
}
