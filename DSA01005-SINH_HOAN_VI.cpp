#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[15];
bool danhdau[15];

void ql(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; ++j)
            cout << a[j];
        cout << ' ';
    }
    else{
        for(int j = 1; j <= n; ++j){
            if(!danhdau[j]){
                a[i] = j; 
                danhdau[j] = true; 
                ql(i + 1); 
                danhdau[j] = false;
            }
        }
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        ql(1); 
        cout << endl;
    }
    return 0;
}