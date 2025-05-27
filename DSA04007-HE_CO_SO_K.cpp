#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

ll Pow(int a, int b){
    if(b == 0) 
        return 1;
    ll temp = Pow(a, b / 2); 
    temp *= temp; 
    if(b % 2)
        temp *= a;
    return temp;
}
ll co_so(int k, string a){
    ll res = 0, cnt = 0;
    for(int i = a.size() - 1; i >= 0; --i)
        res += (a[i] - '0') * Pow(k, cnt++);
    return res;
}
int t, k; 
string a, b; 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> k >> a >> b; 
        ll tong = co_so(k, a) + co_so(k, b);
        string ans = "";
        while(tong){
            ans += to_string(tong % k);
            tong /= k;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}