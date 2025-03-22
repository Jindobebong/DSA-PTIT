#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t; 
string x; 

void sinh(){
    int n = x.size() - 1; 
    while(n >= 0 && x[n] == '0'){
        x[n] = '1'; 
        --n; 
    }
    if(n >= 0){
        x[n] = '0';
    }
    for(int j = 0; j < x.size(); ++j)
        cout << x[j];
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> x; 
        sinh(); 
        cout << endl; 
    }
    return 0;
}