#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n - 1; ++i){
        int ans = -1, k = a[i];
        for(int j = i + 1; j < n; ++j){
            if(a[j] < k){
                ans = j; 
                k = a[j];
            }
        }
        if(ans != -1) swap(a[ans], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
/*
4
5 7 3 2

Buoc 1: 2 7 3 5

Buoc 2: 2 3 7 5

Buoc 3: 2 3 5 7
*/