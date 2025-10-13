#include<bits/stdc++.h>
using namespace std;
set<string>st;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            st.insert(temp);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}