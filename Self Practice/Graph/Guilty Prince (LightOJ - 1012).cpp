#include <bits/stdc++.h>
using namespace std;
const int mx = 30;
char adj[mx][mx];
bool vis[mx][mx];
int n, m;
int dx[] = {+1, -1, 0, 0};
int dy[] = {0, 0, -1, +1};
int cnt;
void dfs(int x, int y)
{
    vis[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && vis[x1][y1] != 1 && adj[x1][y1] != '#')
        {
            dfs(x1, y1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt =0;
        memset(vis, 0, sizeof(vis));

        cin >> m >> n;
        int x, y;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> adj[i][j];
                if (adj[i][j] == '@')
                {
                    x = i;
                    y = j;
                }
            }
        }
        dfs(x,y);
        cout<<cnt<<endl;

    }
    return 0;
}