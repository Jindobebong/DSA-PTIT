#include <bits/stdc++.h>
using namespace std;

int n, k, a[15], target, ans = 0;

void backtrack(int idx, int cnt, int sum){
    if(cnt == k && idx == n + 1){
        ++ans; 
        return;
    }

    for(int i = idx; i <= n; ++i){
        sum += a[i]; 
        if(sum == target) backtrack(i + 1, cnt + 1, 0);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % k != 0) {
        cout << 0 << endl;
        return 0;
    }

    target = sum / k;
    ans = 0;

    backtrack(1, 0, 0);
    cout << ans << endl;
    return 0;
}
