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
        long long high = 2*k,low = 1,ans=0;
        //long long mid = (high+low)/2;
        //long long count = mid - (mid/n);
        while(low<=high){
            long long mid = (high+low)/2;
            long long count = mid - (mid/n);
            if(count>=k){
                ans = mid;
                high = mid-1;

            }else{
                low = mid+1;
            }

        }
        cout<<ans<<endl; 
    }
}
