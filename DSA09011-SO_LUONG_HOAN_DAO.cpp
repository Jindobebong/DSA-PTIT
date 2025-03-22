#include <bits/stdc++.h>
#define maxn 505
using namespace std;

int t, n, m;
int a[maxn][maxn];

int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
/*
(-1,-1)(-1,0)(-1,1) 
(0,-1) (0,0) (0,1)
(1,-1) (1,0) (1,1)
*/
bool vis[maxn][maxn];

void dfs(int x, int y){
    vis[x][y] = 1; 
    for(int i = 0; i < 8; ++i){
        int nx = x + dx[i], ny = y + dy[i]; 
        if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && vis[nx][ny] == 0 && a[nx][ny] == 1)
            dfs(nx, ny); 
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
                cin >> a[i][j];
        int cnt = 0; 
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j){
                if(!vis[i][j] && a[i][j] == 1){
                    dfs(i, j);
                    ++cnt; 
                }
            }
        cout << cnt << "\n";
        memset(vis, 0, sizeof vis);
    }
    return 0;
}