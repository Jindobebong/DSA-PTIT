#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, pair<int, int>>
#define endl "\n"
using namespace std;

int t, n;
vector<pii>a;
bool cmp(pii a, pii b){
    return a.second.second > b.second.second;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        a.resize(n); 
        for(int i = 0; i < n; ++i)
            cin >> a[i].first >> a[i].second.first >> a[i].second.second;
        sort(a.begin(), a.end(), cmp);
        int cnt = 0, d[1005] = {0}, sum = 0;
        for(int i = 0; i < n; ++i){
            for(int j = a[i].second.first; j >= 1; --j){
                if(!d[j]){
                    ++cnt;
                    sum += a[i].second.second;
                    d[j] = 1;
                    break;
                }
            }
        }
        cout << cnt << " " << sum << endl;
    }
    return 0;
}

/*
_sắp xếp theo profit
Tham lam chọn lời cao nhất, 
lấp kín các slot trước deadline.
*/