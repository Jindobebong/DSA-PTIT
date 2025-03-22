#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[15], b[15];
bool danhdau[15];

vector<string>v;

void ql(int i){
    if(i == n + 1){
        string x = ""; 
        for(int j = 1; j <= n; ++j)
            x += to_string(b[j]);
        v.push_back(x);
    }
    else{
        for(int j = 1; j <= n; ++j){
            if(!danhdau[j]){
                b[i] = j; 
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
        string x = "";
        for(int i = 1; i <= n; ++i){
            cin >> a[i]; 
            x += to_string(a[i]);
        }
        ql(1);
        for(int i = 0; i < v.size(); ++i){
            if(v[i] == x){
                cout << i + 1; 
                break;
            }
        }
        cout << endl; 
    }
    return 0;
}