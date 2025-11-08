#include<bits/stdc++.h>
using namespace std;
const int mx = 1010;
int m,n;
char adj[mx][mx];
bool vis[mx][mx];
int dx[] = {+1,-1,0,0};
int dy[] = {0,0,-1,+1};
int cnt;
void dfs(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int x1 = x+ dx[i];
        int y1 = y + dy[i];
        if(x1>=1 && x1<=m && y1>=1 && y1<=n && vis[x1][y1]!=1 && adj[x1][y1]!='#'){
            dfs(x1,y1);
        }
    }
}
int main()
{
cin>>m>>n;
memset(vis,0,sizeof(vis));
cnt =0;
int x,y;
int ans;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        cin>>adj[i][j];
    }
}
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(adj[i][j]=='.' && !vis[i][j]){
            dfs(i,j);
            cnt++; // i just need to find the total connected components
        }
    }
}
cout<<cnt<<"\n";
return 0;
}