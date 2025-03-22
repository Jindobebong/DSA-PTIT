#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; 
	while(t--)
	{
		int n, m; cin >> n >> m; 
		int a[n], b[m]; 
		
		map<int, int> mp; 
		set<int>se, s;
		
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
			se.insert(a[i]);
		}
		for(int j = 0; j < m; ++j)
		{
			cin >> b[j]; 
			mp[b[j]]++;
			if(se.find(b[j]) != se.end()) s.insert(b[j]);
		}
		for(auto x : mp) cout << x.first << ' ';
		cout << "\n";
		for (auto x : s) cout << x << ' ';
		cout << "\n";
	}
}
