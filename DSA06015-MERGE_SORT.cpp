#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[maxn];

void merge(int a[], int l, int m, int r){
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l++] = x[i]; ++i; 
        }
        else{
            a[l++] = y[j]; ++j;
        }
    }
    while(i < x.size()){
        a[l++] = x[i];
        ++i;
    }
    while(j < y.size()){
        a[l++] = y[j];
        ++j;
    }
}
void mergeSort(int a[], int l, int r){
    if(l >= r) 
        return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i) cin >> a[i];
        mergeSort(a, 0, n - 1); 
        for(int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}