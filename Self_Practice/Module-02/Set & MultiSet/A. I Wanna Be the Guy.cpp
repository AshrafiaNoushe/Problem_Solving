#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q;
    vector<int>v1(p);
    set<int>st;
    cin>>p;
    for(auto i : v1){
        cin>>v1[i];
        st.insert(v1[i]);
    }
    cin>>q;
    vector<int>v2(q);
    for(auto i : v2){
        cin>>v2[i];
        st.insert(v2[i]);
    }
    // for(auto i:st){
    //     cout<<i<<" ";
    // }
    if(st.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}