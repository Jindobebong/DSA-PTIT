#include <bits/stdc++.h>
#define ll long long
using namespace std;

char c; 
int n; 
bool danhdau[20];
int a[20];

bool valid() {
    for (int i = 2; i <= n - 1; ++i) {
        if ((a[i] == 1 || a[i] == 5) &&  // Nếu là nguyên âm (A hoặc E)
            (a[i - 1] != 1 && a[i - 1] != 5) && // Phần tử trước là phụ âm
            (a[i + 1] != 1 && a[i + 1] != 5)) { // Phần tử sau là phụ âm
            return false;  // Nếu nguyên âm bị kẹp giữa hai phụ âm, không hợp lệ
        }
    }
    return true;  // Nếu không có nguyên âm nào bị kẹp giữa hai phụ âm
}
void ql(int i){
    if(i == n + 1){
        if(valid()){
            for(int j = 1; j <= n; ++j)
                cout << (char)(a[j] + 64);
            cout << endl;
        }
    }
    else{
        for(int j = 1; j <= n; ++j)
        {
            if(!danhdau[j]){
                danhdau[j] = true; 
                a[i] = j;
                ql(i + 1); 
                danhdau[j] = false;
            }
        }
    }
}
int main()
{
    cin >> c; 
    n = (int)c - 64;
    ql(1);
    return 0;
}