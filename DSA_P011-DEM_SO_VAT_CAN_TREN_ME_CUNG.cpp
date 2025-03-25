#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
using namespace std;

int n, m; 
char a[maxn][maxn];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool vis[maxn][maxn];

void dfs(int x, int y){
    vis[x][y] = 1;
    for(int i = 0; i < 4; ++i){
        int xx = x + dx[i], yy = y + dy[i];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && a[xx][yy] == '#')
            if(vis[xx][yy] == 0)
                dfs(xx, yy);
    } 
}

int main()
{
    cin >> n >> m; 

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
        
    int cnt = 0; 

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            if(vis[i][j] == 0 && a[i][j] == '#')
                ++cnt, dfs(i, j);
    }
    
    cout << cnt;
    return 0;
}

/*
           (-1,0)
(0, -1)    (0 0)   (0, 1)
           (1, 0)
*/