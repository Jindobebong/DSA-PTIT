#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[15];
bool danhdau[15];

vector<vector<int>>ketqua;
void ql(int i){
    if(i == n + 1){
        vector<int> tmp;
        for(int j = 1; j <= n; ++j)
            tmp.push_back(a[j]);
        ketqua.push_back(tmp);
    }
    else{
        for(int j = 1; j <= n; ++j){
            if(!danhdau[j]){
                a[i] = j; 
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
        ql(1); 
        reverse(ketqua.begin(), ketqua.end());
        for(auto x : ketqua)
        {
            for(int i = 0; i < x.size(); ++i)
                cout << x[i];
            cout << ' ';
        }
        ketqua.clear();
        cout << endl;
    }
    return 0;
}