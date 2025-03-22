#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--)
	{
		int n; cin >> n; int a[n]; 
		
		set<int>se;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			while(a[i])
			{
				se.insert(a[i] % 10); 
				a[i] /= 10;
			}
		}
		for(auto x : se) cout << x << ' ';
		cout << "\n";
	}
}
