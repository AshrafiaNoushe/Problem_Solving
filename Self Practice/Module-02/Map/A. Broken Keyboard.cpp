#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && s[i]==s[i+1]){
                i++;
            }else{
                char c = s[i];
                st.insert(c);
                
            }
        }
        for(auto it:st){
            cout<<it;
        }
        cout<<"\n";
    }
    return 0;
}