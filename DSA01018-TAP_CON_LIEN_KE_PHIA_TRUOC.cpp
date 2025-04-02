#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int t, n, k;

vector<int>sinh(vector<int>&a, int n, int k){
    int i; 
    vector<int>result = a;

    //Tìm vị trí i đầu tiên cần thay đổi
    for(i = k; i >= 1; --i){
        if(i > 1 && result[i] > result[i - 1] + 1){
            result[i]--;
            break;
        }
        else if(i == 1 && result[i] > 1){
            result[i]--;
            break;
        }
    }

    //Nếu i = 0 thì đây là hoán vị đầu tiên, in ra cái cuối cùng
    if(i == 0){
        for(int j = 1; j <= k; ++j)
            result[j] = n - k + j;
        return result;
    }

    // Tăng các phần tử của mảng lên tối ưu nhất
    for(int j = i + 1; j <= k; ++j){
        result[j] = n - k + j;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        vector<int>a(k + 1);
        for(int i = 1; i <= k; ++i) cin >> a[i];

        vector<int> prev = sinh(a, n, k); 
        for(int i = 1; i < prev.size(); ++i)
            cout << prev[i] << " ";
        cout << endl;
    }
    return 0;
}
