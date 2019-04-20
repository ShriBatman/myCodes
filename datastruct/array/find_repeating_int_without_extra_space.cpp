//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);

//give an array of size N containing ints from 1 to N find elements that occur twice without using extra space and in O(n) time.
#include<bits/stdc++.h>
using namespace std;

vector<int> check(vector<int>& arr){
	vector<int> res;
	
	for(int i=0;i<arr.size();i++){
		arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
		if(arr[abs(arr[i])-1] > 0) res.push_back(abs(arr[i]));
	}
	return res;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	vector<int> arr = {2,4,2,1,4,5,7,3,9,7};
	vector<int> ar = check(arr);
	
	for(int i=0;i<ar.size();i++){
		cout<<ar[i];
	}
    return 0;
}

