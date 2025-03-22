#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 8 = 1, 6 = 0
int n, a[20]; 
void ql(int i){
    if(i == n + 1){
        int check = 1; 
        if(a[1] != 1 || a[n] != 0){
            check = 0; 
        }
        else{
            for(int j = 2; j <= n; ++j){
                if(a[j] == a[j - 1] && a[j] == 1){
                    check = 0; 
                    break;
                }
            }
            for(int j = 4; j <= n; ++j){
                if(a[j] == a[j - 1] && a[j - 1] == a[j - 2] && a[j - 2] == a[j - 3] && a[j] == 0){
                    check = 0; 
                    break;
                }
            }
        }
        if(check){
            for(int j = 1; j <= n; ++j){
                if(a[j] == 1) cout << 8; 
                else cout << 6;
            }
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
    cin >> n; 
    ql(1);
    //cout << endl; 
    return 0;
}