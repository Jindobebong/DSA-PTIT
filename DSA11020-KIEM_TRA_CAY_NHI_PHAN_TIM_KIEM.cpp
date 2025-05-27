#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int check(vector<int>a, int n){
    for(int i = 1; i < n; ++i){
        if(a[i] <= a[i - 1]) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<int>a(n);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        cout << check(a, n) << endl;
    }
    return 0;
}