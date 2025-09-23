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
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int maxLen =1;
        int curLen =1;
        for(int i=1;i<n;i++){
            int diff=0;
            diff = a[i]-a[i-1];
            if(diff<=k){
                curLen++;
            }else{
                maxLen = max(curLen,maxLen);
                curLen = 1;
            }
        }
        maxLen = max(maxLen,curLen);
        int count= a.size()-maxLen;
        cout<<count<<endl;
    }
    return 0;
}