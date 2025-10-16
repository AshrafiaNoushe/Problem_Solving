#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,string>mp;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        bool ck = false;
        string s;
        for(auto it: mp){
            if(it.second==s1){
                s = it.first;
                ck = true;
                break;
            }
        }
        if(ck){
            mp[s]=s2;
        }else{
            mp[s1]=s2;
        }
    }
        cout<<mp.size()<<endl;

        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
    return 0;
}