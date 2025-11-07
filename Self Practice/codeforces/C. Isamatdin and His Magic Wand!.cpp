#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
        vector<int>v1(n);
		for(auto& it:v){
			v1[it]=v[it];
		}
		for(auto it:v1){
			cout<<it;
		}
	}
}