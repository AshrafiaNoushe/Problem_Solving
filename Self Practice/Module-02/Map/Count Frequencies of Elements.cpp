#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1, 2, 2, 3, 1, 4, 2};
    for(auto n:v){
        cin>>n;
    }
    map<int,int>mp;
    unordered_map<int,int>mp1; //key,val
    for(auto x:v){
        mp[x]++;
        mp1[x]++; //mp[v[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    for(auto x:mp1){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
/*
1 2
2 3
3 1
4 1

4 1 //here it used hash table 
3 1
2 3
1 2
*/