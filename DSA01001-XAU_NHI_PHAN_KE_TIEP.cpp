#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t; 
string x; 
int main()
{
    cin >> t; 
    while(t--){
        int check = 0;
        cin >> x; 
        int n = x.size() - 1; 
        while(n >= 0 && x[n] == '1'){
            x[n] = '0';
            --n;
        }
        if(n == -1) {
            check = 1; 
            cout << x << endl; 
        }
        else x[n] = '1';
        if(!check) cout << x << endl; 
    }
    return 0;
}