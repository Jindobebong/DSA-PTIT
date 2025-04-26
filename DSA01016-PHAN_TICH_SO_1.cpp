#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n; 
vector<int>a;
void backtrack(int sum, int last){
    if(sum == 0){
        cout << '(';
        for(int i = 0; i < a.size(); ++i){
            if(i > 0) cout << " ";
            cout << a[i];
        }
        cout << ") ";
        return;
    }
    for(int i = last; i >= 1; --i){
        if(i <= sum){
            a.push_back(i); 
            backtrack(sum - i, i);
            a.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        a.clear();
        backtrack(n, n);
        cout << endl; 
    }
    return 0;
}