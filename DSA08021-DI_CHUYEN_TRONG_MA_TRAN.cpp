#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
#define pii pair<int, int>
using namespace std;

int t, m, n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> m >> n; 
        int a[m + 5][n + 5];
        for(int i = 1; i <= m; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        
        vector<vector<int>>dist(m + 5, vector<int>(n + 5, -1));

        dist[1][1] = 0;
        queue<pii>q; 
        q.push({1, 1});
        while(q.empty() == 0){
            int x = q.front().first, y = q.front().second; 
            q.pop(); //lấy nó ra xong phải vứt nó đi ngay
            int step = a[x][y];

            //đi xuống
            if(x + step <= m && dist[x + step][y] == -1){
                dist[x + step][y] = dist[x][y] + 1;
                q.push({x + step, y});
            }
            //đi qua phải
            if(y + step <= n && dist[x][y + step] == -1){
                dist[x][y + step] = dist[x][y] + 1;
                q.push({x, y + step});
            }
        }
        cout << dist[m][n] << endl;

    }
    return 0;
}