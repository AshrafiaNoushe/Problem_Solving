#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }else{
            upper[s[i]-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        lower[i]+=upper[i];
    }
    bool chk = true;
    for(int i=0;i<26;i++){
        if(lower[i]==0){
            chk= false;
            break;
        }
    }
    if(chk){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}