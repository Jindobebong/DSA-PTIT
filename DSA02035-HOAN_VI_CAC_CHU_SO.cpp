#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    vector<string> S(k); // k chuỗi
    for (int i = 0; i < k; ++i) {
        cin >> S[i];
    }

    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        perm[i] = i;
    }

    int min_diff = INT_MAX;

    do {
        int min_val = INT_MAX;
        int max_val = INT_MIN;

        // Duyệt từng chuỗi, áp dụng hoán vị perm
        for (int i = 0; i < k; ++i) {
            string new_str = "";
            for (int j = 0; j < n; ++j) {
                new_str += S[i][perm[j]];
            }
            int num = stoi(new_str);
            min_val = min(min_val, num);
            max_val = max(max_val, num);
        }

        min_diff = min(min_diff, max_val - min_val);

    } while (next_permutation(perm.begin(), perm.end()));

    cout << min_diff << endl;
    return 0;
}
