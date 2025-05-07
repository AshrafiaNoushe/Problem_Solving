#include<bits/stdc++.h>
using namespace std;
void print_string(string s){
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'){
            s[i]='q';
        }else if(s[i]=='q')
        {
            s[i]='p';
        }
    }
    cout<<s<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>>s;
        print_string(s);
    }
    return 0;
}