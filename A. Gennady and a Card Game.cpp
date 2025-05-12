#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3>>s4>>s5;
    string comp ="";
    comp+=s1;
    comp+=s2;
    comp+=s3;
    comp+=s4;
    comp+=s5;
    bool check = false;
    for(int i=0;i<comp.size();i++){
        if(comp[i]==s[0]||comp[i]==s[1]){
            check = true;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}