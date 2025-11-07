#include<bits/stdc++.h>
using namespace std;
int count1;
int cnt;
const int mx = 2e4+123;
int vis[mx];
vector<int>adj[mx];
bool isNode[mx];
void dfs(int u,int clr){
    vis[u]=1;
    if(clr==1) count1++;
    cnt++;
    int temp;
    if(clr ==1) temp=2;
    else temp=1;
    for(auto it:adj[u]){
        if(vis[it]==0){
            dfs(it,temp);
        }
    }
}
int main()
{
int t;
cin>>t;
while(t--){
    for(int i=0;i<mx;i++){
        adj[i].clear();
        isNode[i]=0;
        vis[i]=0;
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        isNode[u]=1;
        isNode[v]=1;
    }
    int ans =0;
    for(int i=1;i<=2e4;i++){
        if(isNode[i]==1 && vis[i]==0){ // 1 to n all serially node nao thakte pare or we will work only with duel
            cnt=0;
            count1=0;
            dfs(i,1);
            ans +=max(count1,cnt-count1);
        }
    }
    cout<<ans<<"\n";
}
return 0;
}