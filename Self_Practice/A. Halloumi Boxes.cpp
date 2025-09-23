#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(l>1 || is_sorted(a,a+n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}