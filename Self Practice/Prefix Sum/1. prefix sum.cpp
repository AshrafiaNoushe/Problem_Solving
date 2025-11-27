#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> prefixSum;
    prefixSum.push_back(arr[0]);
    for(int i =1;i<arr.size();i++){
        prefixSum.push_back(prefixSum[i-1]+arr[i]);
    }
    for(auto it: prefixSum){
        cout<<it<<" ";
    }
    return 0;

}