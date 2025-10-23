#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<long long> a(n);
        vector<long long> b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }for(int j=0;j<m;j++){
            cin>>b[j];
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}