#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(auto it:v){
        mp[it]++;
    }
    int sum =0;
    for(auto it:mp){
        if(it.first != it.second){
            if(it.first<it.second){
                sum+= (it.second-it.first);
            }else{
                sum+=it.second;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}