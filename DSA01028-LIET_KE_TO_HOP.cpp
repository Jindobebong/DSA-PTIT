#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[10000], b[50], c[50];
set<int>s;
bool danhdau[50];


void ql(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; ++j)
            cout << c[j] << ' ';
        cout << endl;
    }
    else{
        for(int j = 0; j < s.size(); ++j){
                if(!danhdau[j] && b[j] > c[i - 1]){
                    danhdau[j] = true;
                    c[i] = b[j];
                    ql(i + 1);
                    danhdau[j] = false;
                }
            }
        }
    }
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i){
        cin >> a[i]; 
        s.insert(a[i]);
    }
    int cnt = 0;
    for(int x : s)
        b[cnt++] = x;
    // for(int i = 1; i < cnt; ++i)
    //     cout << b[i] << ' ';
    ql(1);
    return 0;
}
/*
8 3
2 4 4 3 5 1 3 4
*/