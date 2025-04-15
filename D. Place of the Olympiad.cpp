#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int low=1,high= m;
        while(low<high){
        int mid = (high+low)/2;
        if (n * (mid*(m / (mid + 1)) + m % (mid + 1)) >= k){
            high = mid;
        }else{
            low = mid+1;
        }
    }
        cout<<low<<endl;
    }
    return 0;
}