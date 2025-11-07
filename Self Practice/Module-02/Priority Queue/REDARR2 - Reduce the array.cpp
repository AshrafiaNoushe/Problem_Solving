#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>v(n);
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto& it: v){
            cin>>it;
        }
        for(auto& it:v){
            pq.push(it);
        }
        long long int sum =0;
        while(pq.size()>=2){
            long long int sm1 = pq.top();
            pq.pop();
            long long int sm2 = pq.top();
            pq.pop();
            sum+=sm1+sm2;
            pq.push(sm1+sm2);
        }
        // int sm1=pq.top();
        // pq.pop();
        // int sm2 = pq.top();
        // pq.pop();
        // cout<<sm1+sm2<<"\n";
        cout<<sum<<"\n";
    }
    return 0;
}