#include<bits/stdc++.h>
using namespace std;
void solve(int n,int n1,string s,string a,string b){
    vector<char>v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    for(int i=0;i<n1;i++){
        if(b[i]=='D'){
            v.push_back(a[i]);
        }else{
            v.insert(v.begin(),a[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int n1;
        cin>>n1;
        string a,b;
        cin>>a;
        cin>>b;
        solve(n,n1,s,a,b);
    }
}