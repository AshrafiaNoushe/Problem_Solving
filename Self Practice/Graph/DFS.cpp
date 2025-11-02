#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adjM[mx];
vector<int>visited(mx,0);
 void dfs(int u)
 {
    visited[u]=1;
    cout<<"visited node: "<<u<<" ";
    for(auto it:adjM[u]){
        if(visited[it]==0){
            dfs(it);
        }
    }
 }
int main()
{
int n,m;
cin>>n>>m; // n e
for(int i=1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    adjM[u].push_back(v);
    adjM[v].push_back(u);
}
for(int i = 1;i<=n;i++){
    if(visited[i]==0){
        dfs(i);
    }
}
}