#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[20]; 

//cho h = 1, a = 0
void ql(int i){
    if(i == n + 1){
        int check = 1; 
        if(a[n] == 1 || a[1] == 0) check = 0;
        else {
            for(int j = 1; j <= n - 1; ++j){
                if(a[j] == a[j + 1] && a[j] == 1){
                    check = 0; 
                    break;
                }
            }
        }
        if(check){
            for(int j = 1; j <= n; ++j){
                if(a[j] == 1) cout << 'H'; 
                else cout << 'A';
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
    cin >> t; 
    while(t--){
        cin >> n; 
        ql(1); 
        //cout << endl;
    }
    return 0;
}