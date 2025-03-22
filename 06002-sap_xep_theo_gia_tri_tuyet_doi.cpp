#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main() {
	int t; cin >> t; while(t--)
	{
		int n, x; cin >> n >> x; 
		for(int i = 0; i < n; ++i) cin >> a[i];
		stable_sort(a, a + n, [&](int a, int b) {
			return abs(a - x) < abs(b - x);
		});
		for(int i = 0; i < n; ++i) cout << a[i] << ' ';
		cout << "\n";
	}
}
