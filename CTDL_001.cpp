#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[30], n, check = 0;

bool dx(string x){
    int l = 0, r = x.size() - 1; 
    while(l <= r)
    {
        if(x[l] != x[r]) 
            return false;
        ++l; --r;
    }
    return true;
}
void sinh(){
    int i = n; 
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        check = 1;
    }
    else a[i] = 1;
}
int main()
{
    //cout << dx("0001");
    cin >> n;
    while(!check){
        string x = "";
        for(int i = 1; i <= n; ++i)
            x += to_string(a[i]); 
        if(dx(x))
        {
            for(int i = 0; i < x.size(); ++i)
                cout << x[i] << ' '; 
            cout << endl; 
        }
        sinh();
    }
    return 0;
}