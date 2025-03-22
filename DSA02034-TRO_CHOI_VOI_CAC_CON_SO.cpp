#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;
vector<int>a(30);
bool danhdau[30];

void ql(int i){
    if(i == n + 1){
        for(int j = 1; j <= n; ++j) 
            cout << a[j];
        cout << "\n";
        a.clear();
        return;
    }
    for(int j = 1; j <= n; ++j){
        if(!danhdau[j] && abs(j - a[i - 1]) != 1){
            danhdau[j] = true; 
            a[i] = j;
            ql(i + 1); 
            danhdau[j] = false;
        }
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        a[0] = 200;
        ql(1); 
        cout << "\n";
    }
    return 0;
}