#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t;
string s1, s2; 
ll bin(string s){
    ll res = 0, cnt = 0;
    for(int i = s.size() - 1; i >= 0; --i){
        res += (s[i] - '0') * 1 << (cnt++);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s1 >> s2;
        cout << bin(s1) * bin(s2) << endl;
    }
    return 0;
}