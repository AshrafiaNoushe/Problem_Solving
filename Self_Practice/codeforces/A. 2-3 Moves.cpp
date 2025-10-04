#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans;
        if(n<=1){
            ans=2;
        }else{
            if(n%3==0){
                ans = n/3;
            }else{
                ans = n/3 +1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}