#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[20], b[20];

int nt(int n){
    if(n < 2) return 0; 
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0)
            return 0;
    return 1; 
}
void ql(int i){
    if(i == n + 1){
        int sum = 0;
        vector<int>v;
        for(int j = 1; j <= n; ++j){
            if(b[j]){
                v.push_back(a[j]);
                sum += a[j];
            }
        }
        if(nt(sum) && !v.empty()){
            for(auto x : v)
                cout << x << " ";
            cout << "\n";
        }
        return;
    }
    for(int j = 0; j <= 1; ++j){
        b[i] = j;
        ql(i + 1);
    }
}
int main()
{
    cin >> t;
    while(t--){
        cin >> n; 
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        ql(1);
    }
    return 0;
}