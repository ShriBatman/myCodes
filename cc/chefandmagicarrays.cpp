//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		
		vector<long long int> ing;
		vector<long long int> a;
		
		for(j=0;j<n;j++){
			cin>>l;
			ing.push_back(l);
			
			for(m=0;m<l;m++){
				cin>>r;
				a.push_back(r);
			}
		}
		
		int min=0;
		if(abs(*max_element(a.begin(),a.begin()+ing[0]) - *min_element(a.begin()+ing[0],a.begin()+ing[1]+ing[0]))>min){
			min = abs(*max_element(a.begin(),a.begin()+ing[0]) - *min_element(a.begin()+ing[0],a.begin()+ing[1]+ing[0]));
			//cout<<*max_element(a.begin(),a.begin()+ing[0])<<" "<<*min_element(a.begin()+ing[0],a.begin()+ing[0]+ing[1])<<" ";
		}
		if(min<abs(abs(*max_element(a.begin()+ing[0],a.begin()+ing[1]+ing[0]) - *min_element(a.begin(),a.begin()+ing[0])))){
			min = abs(*max_element(a.begin()+ing[0],a.begin()+ing[1]+ing[0]) - *min_element(a.begin(),a.begin()+ing[0]));
			//cout<<*max_element(a.begin()+ing[0],a.begin()+ing[0]+ing[1])<<" "<<*min_element(a.begin(),a.begin()+ing[0])<<" ";
		}
		
		cout<<min<<"\n";
	}
    return 0;
}

