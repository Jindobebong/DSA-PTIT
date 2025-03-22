#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[20]; 
void ql(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; ++j)
            cout << (char)a[j];
        cout << ' ';
    }
    else{
        for(int j = (int)'A'; j <= (int)'B'; ++j)
        {
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
        cout << endl; 
    }
    return 0;
}