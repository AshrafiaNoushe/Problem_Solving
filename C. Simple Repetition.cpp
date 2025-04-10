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
        bool found = false;
        cin>>n>>k;
        if(n==1 && k==2){
            cout<<"YES"<<endl;
            continue;
        }
        if(k>=2){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                found= true;
                break;
            }

        }
        if(found){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}