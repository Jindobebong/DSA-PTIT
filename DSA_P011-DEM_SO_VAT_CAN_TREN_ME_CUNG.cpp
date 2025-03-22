#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, cnt;
char a[1000][1000];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool vis[10000][10000];

void dfs(int x, int y){
    vis[x][y] = 1;
    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i], ny = y + dy[i];
        if(!vis[nx][ny]){
            if(a[nx][ny] == '#')
                dfs(nx, ny);
        }
    }
}
int main()
{
    cin >> n >> m; 
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    //cout << x << " " << y;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(!vis[i][j] && a[i][j] == '#'){
                dfs(i, j);
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}