/*
	Franciszek Pietrusiak
	Zadanie: https://sio2.mimuw.edu.pl/c/pa-2024-1/p/zna/
*/
#include <bits/stdc++.h>
#define PB push_back
#define FR first
#define SD second
using namespace std;

constexpr int MxN = 3e5+5;
int ans[MxN];
map<int, int> mp;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	
	int n; cin >> n;
	for (int i=1; i<=n; i++) {
		int x; cin >> x;
		mp[x]++;
	}
	
	int mx = 0;
	for (auto p : mp)
		mx = max(mx, p.SD);
	
	for (int i=1; i<=mx; i++) {
		for (auto p : mp)
			ans[i] += (p.SD / i) * i;
	}
	
	for (int i=1; i<=n; i++)
		cout << ans[i] << " ";
	cout << "\n";
	
	return 0;
}

