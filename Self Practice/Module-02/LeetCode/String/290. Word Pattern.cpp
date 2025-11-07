#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    cin>>s;
    set<char>st;
    set<string>st1;
    for(auto it:s){
        st.insert(it);
    }
    for(auto it:v){
        st1.insert(it);
    }
    if(st.size()==st1.size()){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }
    return 0;
}