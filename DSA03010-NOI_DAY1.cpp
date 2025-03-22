#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n,a[1000005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        priority_queue<int, vector<int>, greater<int>>p;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i]; 
            p.push(a[i]);
        }
        ll sum = 0;
        while(p.size() > 1){
            int first = p.top(); p.pop();
            int second = p.top(); p.pop();
            int tmp = first + second;
            sum += tmp;
            p.push(tmp);
        }
        cout << sum << "\n";
    }
    return 0;
}
/*
2
4
4 3 2 6
5
4 2 7 6 9
*/