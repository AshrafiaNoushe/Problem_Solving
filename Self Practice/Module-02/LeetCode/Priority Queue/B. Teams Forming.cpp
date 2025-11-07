#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        cin>>v[i];
        pq.push(v[i]);
    }
    int diff=0;
    while(!pq.empty()){
        int x = pq.top(); pq.pop();
        int y = pq.top();pq.pop();
        diff+= x-y;
    }
    cout<<diff<<"\n";
    return 0;
}