#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        priority_queue<int>pq;
        for(auto& it: v){
            cin>>it;
        }
        for(auto& it: v){
            pq.push(it);
        }
        while(!pq.empty()){
            int top = pq.top();
            cout<<top<<" ";
            pq.pop();
            int half = top/2;
            if(half>0){
                pq.push(half);
            }
        }
        cout<<"\n";
    }
    return 0;
}

/*
2 
3
2 4 8 
3
1 2 15
*/