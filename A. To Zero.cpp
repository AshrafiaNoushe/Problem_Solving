#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,k,ans=0; cin>>n>>k;
        if(n&1){
            n-=k; 
            ans++;
        }
        ans+=n/(k-1);
        if(n%(k-1)) ans++;
        cout<<ans<<endl;
    }
}