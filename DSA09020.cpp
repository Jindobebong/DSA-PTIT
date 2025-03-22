#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int ans[maxn][maxn];
int main()
{
    int n; cin >> n; 
    cin.ignore();
    for(int i = 1; i <= n; ++i){
        string line;
        getline(cin, line);
        stringstream ss(line);
        int u, v, a = i; 
        ss >> u; 
        if(a != u){
            ans[a][u] = 1; 
            ans[u][a] = 1;
        }
        while(ss >> v){
            if(a != v){
                ans[a][v] = 1; 
                ans[v][a] = 1;
            }
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}