#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>upper;
    vector<char>lower;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            upper.push_back(s[i]);
        }else{
            lower.push_back(s[i]);
        }
    }
    string s1="";
    int l=0,u=0;
    sort(upper.begin(),upper.end());
    sort(lower.begin(),lower.end());
    for(auto c: s){
        if(c>='A' && c<='Z'){
            s1+=upper[u];
            u++;
        }else{
            s1+=lower[l];
            l++;
        }
    }
    cout<<s1<<endl;
    return 0;
}