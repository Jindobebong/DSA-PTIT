#include <bits/stdc++.h>
#define ll long long
using namespace std;

char c; 
int k, n;
char a[20];
void ql(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; ++j)
            cout << (char)(a[j] + 64);
        cout << "\n";
    }
    else{
        for(int j = 1; j <= n; ++j){
            if(j >= a[i - 1]){
                a[i] = j; 
                ql(i + 1);
            }
        }
    }
}
int main()
{
    cin >> c >> k;
    n = (int)c - 64;
    ql(1);
    return 0;
}