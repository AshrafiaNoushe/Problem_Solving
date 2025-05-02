#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<long long>v;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                ans+=a[i];
                v.push_back(b[i]);
            }else{
                ans+=b[i];
                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k-1;i++){
            ans+=v[i];
        }   
        ans = ans +1;
        cout<<ans<<endl; 
    }
    return 0;
}