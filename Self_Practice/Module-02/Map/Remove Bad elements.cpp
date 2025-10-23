#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n;i++)
        {
            cin>>v[i];
        }
        int maxF = 0;
        for(auto it: v){
            mp[it]++;
        }
        for(auto it: mp){
            maxF = max(maxF,it.second);
        }
        int ans = v.size()-maxF;
        cout<<ans<<endl;

    }
    return 0;
}