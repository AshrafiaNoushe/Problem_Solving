#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>upper(26,0);
    vector<int>lower(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }else if(s[i]=='a' || s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
    }
    // for(auto i: upper){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i: lower){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i: s){
    //     cout<<i<<" ";
    // }
    string ans="";
    for(int i=0;i<26;i++){
        char c = 'A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        char c = 'a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    // for(auto i:ans){
    //     cout<<i;
    // }
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            s[i]=ans[j];
            j++;
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

}