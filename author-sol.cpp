#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// the elements placed at even positions will not be changed, while the elements
	// placed at odd positions need to be swapped out with its symmetrical elements relative to the center
	for (int i = 0; i <= n - i - 1; i++) {
		if ((i + 1) & 1) {
			swap(a[i], a[n - i - 1]);
		}
	}
	for (auto& e : a) {
		cout << e << " ";
	}
	cout << '\n';
	return 0;
}
