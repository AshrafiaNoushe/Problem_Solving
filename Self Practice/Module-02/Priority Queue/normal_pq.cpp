#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>v(n);
    priority_queue<int>pq;
    for(auto& it: v){
        cin>>it;
        pq.push(it);
    }
    cout<<pq.top()<<" ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}