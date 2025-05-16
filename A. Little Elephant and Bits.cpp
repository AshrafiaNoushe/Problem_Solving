#include<bits/stdc++.h>
using namespace std;
void process(string s){
    int n = s.size();
    string s1 = "";
    bool remove = false;
    for(int i=0;i<n;i++){
        if(!remove && s[i]=='0'){
            remove = true;
            continue;
        }
        s1+=s[i];
    }
    if(!remove){
        s1.pop_back();
    }
    cout<<s1<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    process(s);
    return 0;
}