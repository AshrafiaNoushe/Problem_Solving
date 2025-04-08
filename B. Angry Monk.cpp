#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        sort(a,a+k);
        for(int i=0;i<k-1;i++){
            if(a[i]>1){
                ans+= a[i]-1+a[i];
            }else{
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}