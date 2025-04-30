#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int sum =0,even =0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(sum%2==1||(odd>0 && even>0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}