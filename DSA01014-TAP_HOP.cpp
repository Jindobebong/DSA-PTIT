#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int n, k, s, ans;
vector<int>a(200);
bool danhdau[200];
void backtrack(int i){
    if(i == k + 1){
        int sum = 0;
        for(int j = 1; j <= k; ++j)
            sum += a[j];
        if(sum == s) ++ans;
        return;
    }
    for(int j = 1; j <= n; ++j){
        if(!danhdau[j] && j > a[i - 1]){
            a[i] = j;
            danhdau[j] = true;
            backtrack(i + 1);
            danhdau[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    while(1){
        cin >> n >> k >> s;
        if(n == 0 && s == 0 && k == 0) return 0;
        a.clear();
        ans = 0;
        backtrack(1);
        cout << ans << endl;
    }
    return 0;
}