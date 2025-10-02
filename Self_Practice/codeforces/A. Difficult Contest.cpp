#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}