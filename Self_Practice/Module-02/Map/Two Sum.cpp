#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,7,22,13,9};
    int target = 9;
    unordered_map<int,int>mp;
    for(auto x:v){
        mp[x]++;
    }
    bool found = 0;
    for(auto x:mp){
        if(mp.find(target-x.first)!= mp.end()){ //i can use in common s.found(ele)!=-1 but in unMap i have to do like this
            cout<<x.first<<"+"<<target-x.first<<"="<<target<<endl;
            found = 1;
            break;
        }

    }
    if(!found){
        cout<<"NO such pair"<<endl;
    }
    return 0;

}