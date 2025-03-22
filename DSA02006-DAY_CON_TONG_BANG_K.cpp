#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[20], b[20], k;

vector<vector<int>>ans;
void ql(int i){
    if(i == n + 1){
        vector<int>v; int sum = 0;
        for(int j = 1; j <= n; ++j)
        {
            if(a[j]){
                v.push_back(b[j]);
                sum += b[j];
            }
        }
        if(sum == k){
            ans.push_back(v);
        }
        v.clear();
        return;
    }
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        ql(i + 1);
    }
}
int main()
{
    cin >> t;
    while(t--){
        cin >> n >> k; 
        for(int i = 1; i <= n; ++i)
            cin >> b[i];
        sort(b + 1, b + n + 1);
        ql(1);
        reverse(ans.begin(), ans.end());
        if(ans.size() == 0) cout << "-1\n";
        else {
            for(auto x : ans){
                cout << '['; 
                for(int i = 0; i < x.size(); ++i){
                    cout << x[i];
                    if(i != x.size() - 1) cout << ' ';
                }
                cout << "] ";
            }
            cout << "\n";
        }
        ans.clear();
    }
    return 0;
}
/*
2
5 50
5 10 15 20 25
8  53
15  22  14  26  32  9  16  8
*/