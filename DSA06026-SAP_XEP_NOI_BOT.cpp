#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n - 1; ++i){
        bool k = false;
        for(int j = 1; j < n - i; ++j){
            if(a[j] < a[j - 1]){
                k = true;
                swap(a[j], a[j - 1]);
            }
        }
        if(k == false)
            break;
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : a)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}

/*
4
5 3 2 7

3 2 5 7
Buoc 1: 3 2 5 7
Buoc 2: 2 3 5 7
*/