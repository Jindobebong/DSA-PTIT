#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k, a[20], b[20];

vector<string>v;
void ql(int i){
    if(i == k + 1){
        string s = ""; 
        for(int j = 1; j <= k; ++j)
            s += to_string(b[j]);
        v.push_back(s);
    }
    else{
        for(int j = b[i - 1] + 1; j <= n - k + i; ++j){
            b[i] = j; 
            ql(i + 1);
        }
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        string x = ""; 
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i]; 
            x += to_string(a[i]);
        }
        ql(1); 
        for(int i = 0; i < v.size(); ++i){
            if(v[i] == x){
                cout << i + 1 << endl; 
                break;
            }
        }
    }
    return 0;
}