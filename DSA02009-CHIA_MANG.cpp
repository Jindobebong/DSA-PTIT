#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, k, target;
vector<int>a, group;
bool found;

void backtrack(int i){
    if(found) return;
    if(i == n){
        for(int j = 0; j < k; ++j){
            if(group[j] != target) // ở nhóm đấy ko bằng target => loại bỏ
                return;
        }
        found = true;
        return;
    }

    // thử xem đủ k nhóm không
    for(int j = 0; j < k; ++j){
        if(group[j] + a[i] <= target){
            group[j] += a[i]; // đưa a[i] vào group 
            backtrack(i + 1); // thử backtrack sang thằng khác
            group[j] -= a[i];
        }
        if(group[j] == 0) break; // nếu ko thử được thì loại bỏ luôn
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        a.clear(); 
        a.resize(n); 
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i]; 
            sum += a[i];
        }

        if(sum % k != 0){
            cout << 0 << endl;
            continue;
        }

        sort(a.rbegin(), a.rend());
        target = sum / k; 

        group.assign(k, 0);
        found = false;

        backtrack(0);
        if(found) cout << 1; 
        else cout << 0; 
        cout << endl;
    }
    return 0;
}