#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n; 

void thapHaNoi(int n, char A, char B, char C){
    if(n == 1){
        cout << A << " -> " << C << endl; 
        return;
    }
    thapHaNoi(n - 1, A, C, B); 
    cout << A << " -> " << C << endl; 
    thapHaNoi(n - 1, B, A, C);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    thapHaNoi(n, 'A', 'B', 'C');
    return 0;
}
/*
Di chuyển N đĩa từ A -> C:
    Nếu N == 1:
        Chỉ cần di chuyển đĩa 1 từ A -> C
    Ngược lại:
        1. Di chuyển N-1 đĩa từ A -> B (dùng C làm trung gian)
        2. Di chuyển đĩa N từ A -> C
        3. Di chuyển N-1 đĩa từ B -> C (dùng A làm trung gian)
*/