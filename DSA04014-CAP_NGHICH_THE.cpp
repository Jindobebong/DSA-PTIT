#include <bits/stdc++.h>
#define ll long long
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n;
int merge(ll a[], int l, int m, int r){
    vector<ll> x(a + l, a + m + 1);
    vector<ll> y(a + m + 1, a + r + 1);
    int cnt = 0, i = 0, j = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l++] = x[i++];
        }
        else{
            cnt += (x.size() - i);
            a[l++] = y[j++];
        }
    }
    while(i < x.size()){
        a[l++] = x[i++];
    }
    while(j < y.size()){
        a[l++] = y[j++];
    }
    return cnt;
}
ll mergeSort(ll a[], int l, int r){
    ll dem = 0;
    if(l < r){
        int m = (l + r) / 2;
        dem += mergeSort(a, l, m); 
        dem += mergeSort(a, m + 1, r);
        dem += merge(a, l, m, r);
    }
    return dem;
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        ll a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << mergeSort(a, 0, n - 1) << endl; 
    }
    return 0;
}