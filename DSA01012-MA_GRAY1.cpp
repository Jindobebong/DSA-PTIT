#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gray(int n){
    return n ^ (n >> 1);
}
int t, n; 
int main()
{
    cin >> t;
    while(t--){
        cin >> n; 
        int x = 1 << n; 
        for(int i = 0; i < x; ++i)
        {
            string s = bitset<32>(gray(i)).to_string(); 
            cout << s.substr(32 - n) << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
n = 5
5 ^ (n >> 1) = 5 ^ 2 = 101 + 010 = 111
*/