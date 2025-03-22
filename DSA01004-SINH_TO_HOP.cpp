#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k, a[20]; 
void ql(int i){
    if(i == k + 1)
    {
        for(int j = 1; j <= k; ++j)
            cout << a[j]; 
        cout << " ";
    }
    else{
        for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
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
        cout << endl; 
    }
    return 0;
}