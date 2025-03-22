#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k, a[20]; 
void ql(int i){
    if(i == n + 1){
        int d1 = 0; 
        for(int j = 1; j <= n; ++j)
            if(a[j] == 1) ++d1;
        if(d1 == k){
            for(int j = 1; j <= n; ++j)
                cout << a[j];
            cout << endl;
        }
    }
    else{
        for(int j = 0; j <= 1; ++j){
            a[i] = j; 
            ql(i + 1);
        }
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        ql(1);
        //cout << endl; 
    }
    return 0;
}