#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    stack<int>st[n];
    while(q--){
        int qtype;
        cin>>qtype;
        if(qtype==0){
            int t,x;
            st[t].push(x);
        }else if(qtype==1){
            int t;
            cin>>t;
            while(!st[t].empty()){
                cout<<st[t].top()<<endl;
            }
        }else{
            int t;
            cin>>t;
            while(!st[t].empty()){
                st[t].pop();
            }
        }
    }
    return 0;

}