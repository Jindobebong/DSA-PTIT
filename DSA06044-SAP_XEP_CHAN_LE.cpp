#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int n, x;

vector<int>chan, le;
int main()
{
    cin >> n; 
    for(int i = 1; i <= n; ++i){
        cin >> x; 
        if(i % 2) le.push_back(x); 
        else chan.push_back(x);
    }
    sort(le.begin(), le.end()); 
    sort(chan.begin(), chan.end(), greater<int>());
    for(int i = 1; i <= n / 2; ++i)
        cout << le[i - 1] << " " << chan[i-1] << " ";
    if(n % 2) cout << le[n / 2];
    return 0;
}