#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i){
        int j = i; 
        while(j > 0 && a[j] < a[j - 1]){
            swap(a[j], a[j - 1]);
            --j;
        }
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; ++j)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}

/*
4
5 7 3 2

Buoc 0: 5

Buoc 1: 5 7

Buoc 2: 3 5 7

Buoc 3: 2 3 5 7
*/