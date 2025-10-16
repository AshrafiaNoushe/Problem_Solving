#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp; //key,val
    for(auto it: s){
        mp[it]++;
    }
    for(auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}