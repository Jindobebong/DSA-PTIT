#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, w, a[105], c[105], result = INT_MIN;
vector<int>kq;
void backtrack(int i, int sum, int ans, vector<int>res){
    if(i == n + 1){
        if(ans > result){
            result = ans; 
            kq = res;
        }
        return;
    }

    // chọn ai
    if(sum + a[i] <= w){
        res.push_back(1);
        backtrack(i + 1, sum + a[i], ans + c[i], res);
        res.pop_back();
    }
    // không chọn ai
    if(sum <= w){
        res.push_back(0); 
        backtrack(i + 1, sum, ans, res);
        res.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> w; 
    for(int i = 1; i <= n; ++i) cin >> c[i];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    backtrack(1, 0, 0, {});
    cout << result << endl;
    for(auto x : kq)
        cout << x << " ";
    return 0;
}

/*
cj * xj = max
aj * xj <= w
4 10
6 5 3 7
5 4 6 5
*/