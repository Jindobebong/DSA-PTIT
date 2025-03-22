#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[20], b[10005];
bool danhdau[10005];

void ql(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; ++j)
            cout << b[j] << ' ';
        cout << endl; 
    }
    else{
        for(int j = 1; j <= n; ++j){
            if(!danhdau[j]){
                b[i] = a[j]; 
                danhdau[j] = true; 
                ql(i + 1); 
                danhdau[j] = false;
            }
        }
    }
}
int main()
{
    cin >> n; 
    for(int i = 1; i <= n; ++i) 
        cin >> a[i]; 
    sort(a + 1, a + n + 1);
    ql(1);
    return 0;
}