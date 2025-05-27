#include <bits/stdc++.h>
#define pii pair<int, int>
#define maxn 1000005
#define endl "\n"
using namespace std;

pii convert(string a){
    return {a[0] - 'a', a[1] - '1'};
}

int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};

int bfs(pii start, pii end){
    bool vis[10][10] = {};
    queue<pii>q;
    q.push(start);
    vis[start.first][start.second] = true;
    int dist[10][10] = {};
    
    while(!q.empty()){
        auto [x, y] = q.front(); 
        q.pop();

        for(int j = 0; j < 8; ++j){
            int nx = x + dx[j], ny = y + dy[j];
            if(!vis[nx][ny] && nx >= 0 && nx < 8 && ny >= 0 && ny < 8){
                vis[nx][ny] = true; 
                dist[nx][ny] = dist[x][y] + 1;
                if(nx == end.first && ny == end.second)
                    return dist[nx][ny];
                q.push({nx, ny});
            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string a, b; cin >> a >> b; 
        auto x = convert(a);
        auto y = convert(b);

        cout << bfs(x, y) << endl;
    }
    return 0;
}