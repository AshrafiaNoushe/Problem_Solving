#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll k){
    ll sum =0,count =0;
    for(ll p=1;p<=k;p=p*10+1){
        for(ll d= 1;d<=9;d++){
            if(p*d<=k){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>> t;
    while(t--){
        ll k;
        cin>>k;
        solve(k);
    }
    return 0;
}