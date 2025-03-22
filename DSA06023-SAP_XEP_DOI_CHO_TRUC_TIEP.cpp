#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int main()
{
    cin >> n; 
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j) 
            if(a[j] < a[i]) swap(a[i], a[j]);
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

2 7 5 3
*/