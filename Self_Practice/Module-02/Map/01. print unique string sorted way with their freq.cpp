#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}