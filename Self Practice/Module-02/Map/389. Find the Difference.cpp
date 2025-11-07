#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp;
    for(auto it:s1){
        mp[it]=1;
    }
    char c;
    for(auto it:s2){
        if(mp.count(it)==0){
            c = it;
        }
    }
    cout<<c<<"\n";

    return 0;
}