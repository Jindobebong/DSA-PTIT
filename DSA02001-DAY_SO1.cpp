#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n; 
vector<int>v, a(100);

void dequy(){
    for(int i = 0; i < n - 1; ++i)
        v.push_back(a[i] + a[i + 1]);
    while(!v.empty())
    {
        cout << '[';
        for(int i = 0; i < v.size(); ++i)
        {
            cout << v[i]; 
            if(i != v.size() - 1) cout << ' ';
        }
        cout << "]\n";
        if(v.size() == 1) return;
        vector<int>x;
        for(int i = 0; i < v.size() - 1; ++i)
            x.push_back(v[i] + v[i + 1]);  
        v = x;
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        cout << '[';
        for(int i = 0; i < n; ++i)
        {
            cout << a[i]; 
            if(i != n - 1) cout << ' ';
        }
        cout << "]\n";
        dequy();
        v.clear();
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