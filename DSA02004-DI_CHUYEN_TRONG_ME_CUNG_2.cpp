#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[15][15];
bool vis[15][15];
vector<string>ans;

void backtrack(int i, int j, string path){
    if(i == n && j == n){
        ans.push_back(path);
        return;
    }
    
    //xuống
    if(i + 1  <= n && a[i + 1][j] == 1 && !vis[i + 1][j]){
        vis[i + 1][j] = 1;
        backtrack(i + 1, j, path + 'D');
        vis[i + 1][j] = 0;
    }
    //phải
    if(j + 1 <= n && a[i][j + 1] == 1 && !vis[i][j + 1]){
        vis[i][j + 1] = 1; 
        backtrack(i, j + 1, path + 'R');
        vis[i][j + 1] = 0;
    }
    //trái
    if(j - 1 >= 1 && a[i][j - 1] == 1 && !vis[i][j - 1]){
        vis[i][j - 1] = 1;
        backtrack(i, j - 1, path + 'L');
        vis[i][j - 1] = 0;
    }
    //trên
    if(i - 1 >= 1 && a[i - 1][j] == 1 && !vis[i - 1][j]){
        vis[i - 1][j] = 1;
        backtrack(i - 1, j, path + 'U');
        vis[i - 1][j] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        memset(a, 0, sizeof a);
        memset(vis, 0, sizeof vis);
        ans.clear();

        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        
        if(a[1][1] == 1){
            vis[1][1] = 1;
            backtrack(1, 1, "");
        }
        
        if(ans.size() == 0) 
            cout << -1;
        else{
            sort(ans.begin(), ans.end());
            for(auto s : ans)
                cout << s << ' ';
        }
        cout << endl; 
    }
    return 0;
}