#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int maxi = INT_MIN,diff;
        for(int i=0;i<n;i=i+2){
            diff = abs(v[i]-v[i+1]);
            maxi = max(maxi,diff);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
