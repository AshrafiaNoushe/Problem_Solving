#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
int vis[mx];
int countN;
vector<int>adj[mx];
void dfs(int u){
    vis[u]=1;
    for(auto it:adj[u]){
        if(vis[it]==0){
            countN++;
            dfs(it);
        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            countN =1; //cnt=0 dele parent node baadjacce so -1 ans hosce size theke
            dfs(i);
            ans = max(ans,countN);
        }
    }
    cout<<ans<<"\n";
    return 0;

}