#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>st;
    for(auto i:v){
        cin>>v[i];
        st.insert(v[i]);
    }
    // for(auto it: st){
    //     cout<<it<<" ";
    // }
    if(st.size()<=1){
        cout<<"NO"<<endl;
    }else{
        auto val = st.begin();
        advance(val,1);
        cout<<*val<<endl;
    }
    return 0;

}