#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n; 
vector<int>v, a;
vector<vector<int>>kq;
void dequy(){
    for(int i = 0; i < n - 1; ++i)
        v.push_back(a[i] + a[i + 1]);
    kq.push_back(v);
    while(!v.empty())
    {
        if(v.size() == 1) return;
        vector<int>x;
        for(int i = 0; i < v.size() - 1; ++i)
            x.push_back(v[i] + v[i + 1]);  
        v = x;
        kq.push_back(v);
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        a.clear(); 
        v.clear(); 
        kq.clear();
        for(int i = 0; i < n; ++i)
        {
            int x; cin >> x; a.push_back(x);
        }
        kq.push_back(a);
        dequy();
        reverse(kq.begin(), kq.end()); 
        for(auto &x : kq)
        {
            if(x.size() != 0)
            {
                cout << '[';
                for(int i = 0; i < x.size(); ++i)
                {
                    cout << x[i]; 
                    if(i != x.size() - 1) cout << ' ';
                }
                cout << "] ";
            }
        }
        cout << "\n"; 
    }
    return 0;
}
/*
3
5
1 2 3 4 5
4
2 4 6 8
5
2 3 4 5 9
*/