#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--)
	{
		int n, k; cin >> n >> k; int a[n]; 
		for(int i = 0; i < n; ++i) cin >> a[i];
		sort(a, a + n, greater <int>());
		int l = 0; 
		while(l < k)
		{
			cout << a[l] << ' '; ++l;
		}
		cout << "\n";
	}
}
