#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, m;
set<string>s;
string a[30], b[30], c[30];
bool danhdau[30];

void ql(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; ++j)
            cout << c[j] << " ";
        cout << "\n";
        return;
    }
    for(int j = 1; j <= m; ++j){
        if(!danhdau[j] && b[j] > c[i - 1]){
            danhdau[j] = true;
            c[i] = b[j]; 
            ql(i + 1); 
            danhdau[j] = false;
        }
    }
}
int main()
{
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i){
        string x; cin >> x;
        s.insert(x);
    }
    for(auto x : s)
        b[++m] = x;
    // for(int i = 1; i <= m; ++i)
    //     cout << b[i] << " ";
    //cout << m; 
    ql(1);
    return 0;
}
/*
6 2
DONG TAY NAM BAC TAY BAC
*/