#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j)
            if(a[i] > a[j]) swap(a[i], a[j]);
        
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; ++j)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}

