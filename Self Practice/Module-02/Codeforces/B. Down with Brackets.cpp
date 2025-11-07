#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    int count = 0;
    int n = s.size()-2;
    for(int i=1;i<n;i++){
        if(s[i]=='('){
            count++;
        }else{
            count--;
        }
        if(count<0){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(count==0){
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
        string s;
        cin>>s;
        solve(s);
    }
}