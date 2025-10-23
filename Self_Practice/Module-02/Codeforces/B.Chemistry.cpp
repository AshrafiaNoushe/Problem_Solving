#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k,string s){
    vector<int>v(26,0);
    int odd=0;
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(v[i]%2!=0){
            odd++;
        }
    }
    if(odd>k+1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(n,k,s);
    }
}