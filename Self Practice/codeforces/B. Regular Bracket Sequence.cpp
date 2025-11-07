#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size= s.size();
    int count =0;
    stack<char>st;
    for(auto it:s){
        if(st.empty() && it==')'){
            size--;
            continue;
        }else{
            if(it=='('){
                st.push(it);
            }else if(!st.empty() && it==')'){
                count+=2;
                st.pop();
            }
        }
    }
    cout<<count<<endl;

    return 0;
}