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
        int a[n+10],b[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        map<int,int>visit_1,visit_2;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                visit_1[i]=1;
                ans+=a[i];
            }else{
                visit_2[i]=1;
                ans+=b[i];
            }
        }
        vector<long long>v;
        for(int i=0;i<n;i++){
            if(visit_1[i]==0){
                v.push_back(a[i]);
            }else if(visit_2[i]==0){
                v.push_back(b[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k-1;i++){
            ans+=v[i];
        }
        ans = ans+1;
        cout<<ans<<endl;   
    }
    return 0;
}