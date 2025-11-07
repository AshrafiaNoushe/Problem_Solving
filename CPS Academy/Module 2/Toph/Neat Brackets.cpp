#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(auto& it: s){
        if(it=='('){
            st.push(it);
        }else if(it==')'){
            if(st.empty()){
                cout<<"No"<<endl;
                return 0;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}