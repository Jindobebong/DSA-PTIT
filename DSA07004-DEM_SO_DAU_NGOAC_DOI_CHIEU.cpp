#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--){
        string s; cin >> s;
        int cnt = 0, ans = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(') ++cnt;
            else if(s[i] == ')') --cnt;

            if(cnt < 0){
                ++ans;
                cnt = 1;
            }
        }
        ans += cnt / 2;
        cout << ans << "\n";
    }
    return 0;
}
/*
mỗi 1 dấu '(' cần đi kèm 1 dấu ')'
--> khi gặp mở ngoặc ++cnt, khi gặp đóng ngoặc --cnt
        --> nếu mà cnt < 0, thì cần đổi dấu --> ++ans
--> đến cuối nếu mà cnt > 0, chứng tỏ số dấu ngoặc mở còn thừa, cần phải xử lí --> chia đôi chúng ra để tạo thành cặp 
        --> ans += cnt / 2
*/