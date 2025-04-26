#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int t, s, p, n, d[205], a[205];
bool danhdau[205];
vector<int>snt;
vector<vector<int>>ans;
int nt(int n){
    if(n < 2)
        return 0; 
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return 0;
    }
    return 1;
}

void sinh(int p, int s){
    for(int i = p + 1; i <= s; ++i){
        if(nt(i)) snt.push_back(i);
    }
}

void backtrack(int i){
    if(i == n + 1){
        vector<int>res;
        int sum = 0;
        for(int j = 1; j <= n; ++j){
            res.push_back(a[j]);
            sum += a[j];
        }
        if(sum == s) ans.push_back(res);
        return;
    }
    for(int j = 0; j < snt.size(); ++j){
        if(!danhdau[j] && snt[j] > a[i - 1]){
            a[i] = snt[j];
            danhdau[j] = true;
            backtrack(i + 1);
            danhdau[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> p >> s;
        snt.clear(); 
        memset(danhdau, 0, sizeof danhdau);
        ans.clear();
        sinh(p, s);
        backtrack(1); 
        cout << ans.size() << endl;
        for(auto x : ans){
            for(int i : x)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

/*
11 13 17 19 23
*/