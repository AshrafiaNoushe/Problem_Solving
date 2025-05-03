#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n) , b(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0; i< n; i++){
            cin >> b[i];
        }
        if(count(b.begin(), b.end(), -1) == n){
            long long mx = a[0], mn = a[0];
            for(int i = 1;i < n; i++){
                mx = max ( a[i], mx);
                mn = min ( a[i], mn);
            }
            cout<<( mn + k + 1)- mx <<endl;
            continue;
        }
        long long sum=-1;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                sum = a[i]+b[i];
                break;
            }
        }
        bool check = true;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if(a[i]+b[i]!=sum){
                    check = false;
                    break;
                }
            }else{
                int need = sum -a[i];
                if(need<0 || need>k){
                    check = false;
                    break;
                }
            }
        }
        cout<<(check ? "1" : "0")<<endl;
    }
    return 0;
}